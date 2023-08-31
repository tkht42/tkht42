/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taimai <taimai@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/31 14:10:48 by taimai            #+#    #+#             */
/*   Updated: 2023/08/31 18:58:46 by taimai           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	arc_base(char c, char *base);
int	ft_atoi_base(char *str, char *base);
int	base_size(char *base);

int	count_digit(int nbr, int n)
{
	int	result;

	result = 0;
	while (nbr)
	{
		result++;
		nbr /= n;
	}
	return (result);
}

char	*ft_itoa_base(int nbr, char *base)
{
	int		is_negative;
	int		size;
	char	*str;

	size = 0;
	is_negative = 0;
	if (nbr < 0)
	{
		nbr = -nbr;
		is_negative = 1;
	}
	size += count_digit(nbr, base_size(base)) + is_negative;
	str = (char *)malloc(size + 1);
	if (str == NULL)
		return (NULL);
	str[size] = '\0';
	while (size-- > is_negative)
	{
		str[size] = base[nbr % base_size(base)];
		nbr /= base_size(base);
	}
	if (is_negative)
		str[0] = '-';
	return (str);
}

char	*ft_convert_base(char *nbr, char *base_from, char *base_to)
{
	int		nbr_dec;
	char	*result;

	if (base_size(base_to) < 2 || base_size(base_from) < 2)
		return (NULL);
	nbr_dec = ft_atoi_base(nbr, base_from);
	if (nbr_dec == 0)
	{
		result = (char *)malloc(2);
		if (result == NULL)
			return (NULL);
		result[0] = base_to[0];
		result[1] = 0;
		return (result);
	}
	result = ft_itoa_base(nbr_dec, base_to);
	return (result);
}

// int main()
// {
//     char base16[] = "0123456789ABCDEF";
//     char base2[] = "01";

//     printf("Base 16:\n");
//     char *converted1 = ft_convert_base("-FF", base16, base2);
//     if (converted1)
//     {
//         printf("Converted: %s\n", converted1); // Expected: "11111111"
//         free(converted1);
//     }

//     printf("Base 2:\n");
//     char *converted2 = ft_convert_base("0", base2, base16);
//     if (converted2)
//     {
//         printf("Converted: %s\n", converted2); // Expected: "A"
//         free(converted2);
//     }

//     return 0;
// }