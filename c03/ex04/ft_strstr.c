/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taimai <taimai@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/20 13:12:16 by taimai            #+#    #+#             */
/*   Updated: 2023/08/20 16:19:51 by taimai           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	*ft_strstr(char *str, char *to_find)
{
	char	*s_str;
	char	*finder;

	if (*str == '\0' && *to_find == '\0')
		return (str);
	while (*str)
	{
		s_str = str;
		finder = to_find;
		while (*finder && (*finder == *s_str))
		{
			s_str++;
			finder++;
		}
		if (*finder == '\0')
			return (str);
		str++;
	}
	return (NULL);
}
