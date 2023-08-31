/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taimai <taimai@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/22 11:41:48 by taimai            #+#    #+#             */
/*   Updated: 2023/08/22 20:15:39 by taimai           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <unistd.h>

char	*im_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

int	lengther(char *str)
{
	int	length;

	length = 0;
	while (*str)
	{
		str++;
		length++;
	}
	return (length);
}

char	*ft_strdup(char *src)
{
	char	*t;
	int		len;

	len = lengther(src);
	t = malloc(sizeof(char) * (len + 1));
	im_strcpy(t, src);
	return (t);
}

// int main(void)
// {
//   char	*s;

//   s = ft_strdup("STR");
//   printf("s = %s\n", s);
//   free(s);
//   return 0;
// }