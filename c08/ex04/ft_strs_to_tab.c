/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taimai <taimai@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/23 19:19:01 by taimai            #+#    #+#             */
/*   Updated: 2023/08/24 12:26:12 by taimai           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stock_str.h"
#include <stdlib.h>
#include <string.h>

int	ft_strlen(char *str)
{
	int	len;

	len = 0;
	while (str[len])
		len++;
	return (len);
}

char	*ft_strdup(char *src)
{
	int		len;
	int		i;
	char	*copy;

	len = ft_strlen(src);
	i = 0;
	copy = (char *)malloc(sizeof(char) * (len + 1));
	if (copy == NULL)
		return (NULL);
	while (i <= len)
	{
		copy[i] = src[i];
		i++;
	}
	return (copy);
}

struct s_stock_str	*ft_strs_to_tab(int ac, char **av)
{
	int			i;
	t_stock_str	*arr;

	i = 0;
	arr = (t_stock_str *)malloc(sizeof(t_stock_str) * (ac + 1));
	if (arr == NULL)
		return (NULL);
	while (i < ac)
	{
		arr[i].size = ft_strlen(av[i]);
		arr[i].str = av[i];
		arr[i].copy = ft_strdup(av[i]);
		i++;
	}
	arr[ac].size = 0;
	arr[ac].str = NULL;
	arr[ac].copy = NULL;
	return (arr);
}

// #include <stdio.h>

// int main(int argc, char **argv)
// {
//     t_stock_str *result = ft_strs_to_tab(argc, argv);
//     if (result == NULL)
//     {
//         printf("Memory allocation error.\n");
//         return (1);
//     }

//     for (int i = 0; result[i].str != NULL; i++)
//     {
//         printf("String: %s\n", result[i].str);
//         printf("Size: %d\n", result[i].size);
//         printf("Copy: %s\n", result[i].copy);
//     }

//     for (int i = 0; result[i].str != NULL; i++)
//     {
//         free(result[i].copy);
//     }
//     free(result);

//     return (0);
// }
