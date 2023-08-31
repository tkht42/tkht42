/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taimai <taimai@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/20 13:12:40 by taimai            #+#    #+#             */
/*   Updated: 2023/08/23 11:42:30 by taimai           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*catfake(char *dest, char *src)
{
	char	*keep;

	keep = dest;
	while (*dest)
		dest++;
	while (*src)
		*dest++ = *src++;
	*dest = '\0';
	return (keep);
}
