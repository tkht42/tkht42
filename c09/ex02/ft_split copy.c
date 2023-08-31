/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yusatou <yusatou@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/27 15:21:59 by yusatou           #+#    #+#             */
/*   Updated: 2023/08/27 15:22:04 by yusatou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	len;

	len = 0;
	while (str[len] != '\0')
		len++;
	return (len);
}

int	is_c(char c, char *charset)
{
	while (*charset)
	{
		if (c == *charset)
			return (1);
		charset++;
	}
	return (0);
}

char	*ft_strdup(char *src, int *start, int *end)
{
	char	*dest;
	int		i;

	dest = malloc((*end - *start + 1) + 1);
	i = 0;
	while (*start + i <= *end)
	{
		dest[i] = *(src + *start + i);
		i++;
	}
	dest[i] = '\0';
	*start = -1;
	*end = -1;
	return (dest);
}

int	get_outer_mem(char *str, char *charset)
{
	int	match;
	int	i;

	match = 0;
	i = 0;
	while (str[i] != '\0')
	{
		if (i == 0)
		{
			if (!is_c(str[i], charset))
				match++;
		}
		else
		{
			if (!is_c(str[i], charset) && is_c(str[i - 1], charset))
				match++;
		}
		i++;
	}
	return (match);
}

char	**ft_split(char *str, char *charset)
{
	int		i;
	char	**ret;
	int		start;
	int		end;

	ret = (char **)malloc(sizeof(char *) * (get_outer_mem(str, charset) + 1));
	i = 0;
	start = -1;
	end = -1;
	while (str[i] != '\0')
	{
		if ((i == 0 && !is_c(str[i], charset))
			|| (i > 0 && !is_c(str[i], charset) && is_c(str[i - 1], charset)))
			start = i;
		if ((!is_c(str[i], charset) && is_c(str[i + 1], charset))
			|| (!is_c(str[i], charset) && str[i + 1] == '\0'))
			end = i;
		if (start != -1 && end != -1)
		{
			*ret++ = ft_strdup(str, &start, &end);
		}
		i++;
	}
	*ret = 0;
	return (ret - get_outer_mem(str, charset));
}
