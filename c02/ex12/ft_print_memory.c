/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sas.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taimai <taimai@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/17 17:17:14 by taimai            #+#    #+#             */
/*   Updated: 2023/08/17 19:54:19 by taimai           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>


char	gethexa(void)
{
	char	hexchars[] = "0123456789ABCDEF";
	return (hexchars);
}

void	ft_putstr_non_printable(char *str)
{
	int	i;
	char	a;

    i = 0;

	while (str[i] != '\0')
	{
		a = str[i];
		if (str[i] > 31 && str[i] < 127)
			write(1, &a, 1);
		else
		{
			write(1, '\\', 1);
			if (a <= 16)
			{
				while (a != 0)
				{
					write(1, )
					write(1, hexchars + (a%16), 1);
					a /= 16;
				}
			}
		}
		i++;
	}
}

int	main(void)
{
	ft_putstr_non_printable("uryryu''[]w/w");
}



char	p

while (p != 0)
{
	char hex =
	hex = "0123456789ABCDEF"[p % 16];
	p = p / 16;
	hexchars[] = p 
}
