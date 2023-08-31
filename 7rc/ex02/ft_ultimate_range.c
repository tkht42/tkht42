/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taimai <taimai@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/22 20:39:03 by taimai            #+#    #+#             */
/*   Updated: 2023/08/25 09:46:48 by taimai           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)

{
	int	size;
	int	*p;

	if (max <= min)
	{	
		*range = NULL;
		return (0);
	}
	size = max - min;
	*range = (int *)malloc(sizeof(int) * (size));
	if (*range == NULL)
		return (-1);
	p = *range;
	while (min < max)
		*p++ = min++;
	return (size);
}

// #include <stdio.h>
// #include <stdlib.h>
// #include <limits.h>

// int ft_ultimate_range(int **range, int min, int max);

// int main() 
// {
//     int *arr = NULL; // Initialize a pointer to int
//     int min = INT_MIN;
//     int max = 0;

//     int size = ft_ultimate_range(&arr, min, max);

//     for (int i = 0; i < size; i++) 
// 	{
//     	printf("%d ", arr[i]);
//     }
//         printf("\n");
//     // Don't forget to free the allocated memory when you're done with it.
//     free(arr);

//     return 0;
// }