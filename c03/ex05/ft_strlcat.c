/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taimai <taimai@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/20 13:12:19 by taimai            #+#    #+#             */
/*   Updated: 2023/08/20 16:24:40 by taimai           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	len_str(char *str)
{
	unsigned int	count;

	count = 0;
	while (str[count])
		count++;
	return (count);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	k;
	unsigned int	max_copy;
	unsigned int	d_nb;
	unsigned int	s_nb;

	d_nb = len_str(dest);
	s_nb = len_str(src);
	if (size <= d_nb)
		return (size + s_nb);
	max_copy = size - d_nb - 1;
	k = 0;
	while (k < max_copy)
	{
		if (src[k] == '\0')
			break ;
		dest[d_nb + k] = src[k];
		k++;
	}
	dest[k + d_nb] = '\0';
	return (s_nb + d_nb);
}

// #include <stdio.h>
// #include <string.h>
// int main()
// {
//     char dest[20] = "ABCDE";
//     char src[] = "1234";
//     int x = 7;
//     unsigned int result1 = strlcat(dest, src, x);
//     printf("%s: %u\n", dest, result1);
//     return(0);
// }