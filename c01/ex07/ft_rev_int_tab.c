/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taimai <taimai@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/14 06:53:32 by taimai            #+#    #+#             */
/*   Updated: 2023/08/15 13:07:26 by taimai           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int size)
{
	int	index;
	int	c;

	index = 0;
	c = 0;
	while (index < (size / 2))
	{
		c = tab[index];
		tab[index] = tab[size -1 - index];
		tab[size -1 - index] = c;
		index++;
	}
}
