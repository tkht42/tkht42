/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base2.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taimai <taimai@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/31 14:10:37 by taimai            #+#    #+#             */
/*   Updated: 2023/08/31 18:58:55 by taimai           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	base_size(char *base)
{
	int	n;
	int	i;

	n = 0;
	while (base[n])
	{
		i = 0;
		while (i < n)
		{
			if (base[i] == base[n])
				return (0);
			i++;
		}
		if (base[n] == '+' || base[n] == '-' || base[n] == ' '
			|| base[n] == '\t' || base[n] == '\n' || base[n] == '\r'
			|| base[n] == '\f' || base[n] == '\v')
			return (0);
		n++;
	}
	if (n < 2)
		return (0);
	return (n);
}

int	arc_base(char c, char *base)
{
	int	i;

	i = 0;
	while (base[i])
	{
		if (base[i] == c)
			return (i);
		i++;
	}
	return (-1);
}

int	ft_atoi_base(char *str, char *base)
{
	int	result;
	int	sign;

	result = 0;
	sign = 1;
	if (!base_size(base))
		return (0);
	while (*str == ' ' || *str == '\t' || *str == '\n' || *str == '\r'
		|| *str == '\f' || *str == '\v')
		str++;
	while (*str == '-' || *str == '+')
	{
		if (*str == '-')
			sign *= -1;
		str++;
	}
	while (arc_base(*str, base) >= 0)
	{
		result = result * base_size(base) + arc_base(*str, base);
		str++;
	}
	return (result * sign);
}
