/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taimai <taimai@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/20 13:12:13 by taimai            #+#    #+#             */
/*   Updated: 2023/08/20 23:18:41 by taimai           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	char			*keep;
	unsigned int	i;

	i = 0;
	keep = dest;
	while (*dest)
		dest++;
	while (*src && i < nb)
	{
		*dest++ = *src++;
		i++;
	}
	*dest = '\0';
	return (keep);
}
