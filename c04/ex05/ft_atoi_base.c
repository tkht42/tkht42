/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taimai <taimai@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/27 18:42:04 by taimai            #+#    #+#             */
/*   Updated: 2023/08/28 09:15:33 by taimai           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	countbase(char ch, char *base_name)
{
	int	i;

	i = -1;
	while (base_name[++i])
		if (base_name[i] == ch)
			return (i);
	return (-1);
}

int	check_base(char *base)
{
	int	i;
	int	z;

	i = 0;
	z = 0;
	if (base[0] == '\0' || base[1] == '\0')
		return (0);
	while (base[i])
	{
		z = i + 1;
		if (base[i] == '+' || base[i] == '-')
			return (0);
		if (base[i] < 32 || base[i] > 126)
			return (0);
		while (base[z])
		{
			if (base[i] == base[z])
				return (0);
			z++;
		}
		i++;
	}
	return (i);
}

int	ft_atoi_base(char *nbr, char *base_name)
{
	int	sign;
	int	num;

	sign = 1;
	num = 0;
	if (check_base(base_name) == 0)
		return (0);
	while ((*nbr >= '\t' && *nbr <= '\r') || *nbr == ' ')
		nbr++;
	while (*nbr == '+' || *nbr == '-')
	{
		if (*nbr == '-')
			sign *= -1;
		nbr++;
	}
	while (*nbr)
	{
		if (countbase(*nbr, base_name) >= 0)
			num = num * check_base(base_name) + countbase(*nbr, base_name);
		else
			return (0);
		nbr++;
	}
	return (sign * num);
}

// int	ft_atoi_base(char *nbr, char *base_name)
// {
// 	int	sign;
// 	int	num;

// 	num = 0;
// 	sign = -1;
// 	if (check_base(base_name) == 0)
// 		return (0);
// 	while (('\t' <= *nbr && *nbr <= '\r') || *nbr == ' ')
// 		nbr++;
// 	while (*nbr == '+' || *nbr == '-')
// 	{
// 		if (*nbr == '-')
// 			sign *= -1;
// 		nbr++;
// 	}
// 	while (nbr++)
// 		if (countbase(*nbr, base_name) >= 0)
// 			num = num * lengther(base_name) + countbase(*nbr, base_name);
// 	return (sign * num);
// }

// #include <stdio.h>
// #include <stdlib.h>

// int main()
// {
//     int result = ft_atoi_base("     -++++12534", "0123456789");

//     printf("%d\n", result);

//     return 0;
// }