/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taimai <taimai@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/22 13:43:00 by taimai            #+#    #+#             */
/*   Updated: 2023/08/22 14:54:12 by taimai           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	charput(char *str)
{
	while (*str)
		write(1, str++, 1);
	return (0);
}

void	enter(int argc,	char **argv)
{
	int	l;

	l = 1;
	while (l < argc)
	{
		charput(argv[l]);
		write(1, "\n", 1);
		l++;
	}
}

int	ft_strcmp(char *s1, char *s2)
{
	while (*s1 || *s2)
	{
		if (*s1 != *s2)
			return (*s1 - *s2);
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}

int	main(int argc, char **argv)
{
	int		i;
	int		j;
	char	*s;

	i = 1;
	while (i < argc)
	{
		j = i + 1;
		while (j < argc)
		{
			if ((ft_strcmp(argv[i], argv[j]) > 0))
			{
				s = argv[j];
				argv[j] = argv[i];
				argv[i] = s;
			}
			j++;
		}
		i++;
	}
	enter(argc, argv);
}
