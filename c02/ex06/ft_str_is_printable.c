/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taimai <taimai@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/15 13:53:29 by taimai            #+#    #+#             */
/*   Updated: 2023/08/19 14:50:03 by taimai           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_printable(char *str)
{
	if (*str == '\0')
	{
		return (1);
	}
	while (*str)
	{
		if (*str <= 31 || 127 <= *str)
		{
			return (0);
		}
		else
		{
			str++;
		}
	}
	return (1);
}

// #include <stdio.h>
// int	main()
// {
// 	printf("\n%d", ft_str_is_printable("fakhskd"));
// 	return (0);
// }