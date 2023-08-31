/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taimai <taimai@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/20 13:12:01 by taimai            #+#    #+#             */
/*   Updated: 2023/08/25 19:27:21 by taimai           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (i < n)
	{
		if (*s1 != *s2 || *s1 == '\0' || *s2 == '\0')
			return (*s1 - *s2);
		s1++;
		s2++;
		i++;
	}
	return (*s1 - *s2);
}

// #include <stdio.h>
// int main(void)
// {
// 	char s[] = "103ello";
// 	char ss[]	= "100orld";

// 	printf("%d\n",ft_strncmp(s,ss,4));
// 	return 0;
// }
