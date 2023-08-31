/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taimai <taimai@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/15 13:53:36 by taimai            #+#    #+#             */
/*   Updated: 2023/08/19 15:46:50 by taimai           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	j;

	i = 0;
	j = 0;
	while (src[j] != '\0')
	{
		j++;
	}
	while (src[i] != '\0' && i + 1 < size)
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (j);
}

// #include <stdio.h>
// #include <string.h>
// int	main()
// {
// 	char	str[] = "sdfghjkl;'rtyuiop";
// 	char	strdest[20] = "";
// 	char	gdest[20] = "";
// 	int	k = strlcpy(strdest, str, 0);
// 	int	r = ft_strlcpy(gdest, str, 0);
// 	printf("%s\n", strdest);
//   	printf("%d\n", r);
// 	printf("%s\n", gdest);
// 	printf("%d\n", k);
// 	return (0);
// }