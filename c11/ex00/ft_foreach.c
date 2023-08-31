/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_foreach.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taimai <taimai@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/28 01:28:23 by taimai            #+#    #+#             */
/*   Updated: 2023/08/29 20:13:03 by taimai           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_foreach(int *tab, int length, void (*f)(int))
{
	int	i;

	i = 0;
	while (i < length)
		f(tab[i++]);
}

// void print_element(int n) {
//     printf("%d ", n);
// }
// int main() {
//     int arr[] = {1, 2, 3, 4, 5};
//     int length = sizeof(arr) / sizeof(arr[0]);

//     printf("Original Array: ");
//     ft_foreach(arr, length, print_element);
//     return 0;
// }
