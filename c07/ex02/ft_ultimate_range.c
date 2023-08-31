/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taimai <taimai@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/22 20:39:03 by taimai            #+#    #+#             */
/*   Updated: 2023/08/31 18:42:06 by taimai           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <unistd.h>

int	ft_ultimate_range(int **range, int min, int max)

{
	int	size;
	int	i;

	i = 0;
	size = max - min;
	if (size <= 0)
	{	
		*range = NULL;
		return (0);
	}
	*range = (int *)malloc(sizeof(int) * size);
	if (!(*range))
		return (-1);
	while (i < size)
	{
		(*range)[i] = min + i;
		i++;
	}
	return (size);
}

// #include <stdio.h>
// #include <stdlib.h>

// int ft_ultimate_range(int **range, int min, int max);

// int main(void) {
//     int **myRange;
//     int size = ft_ultimate_range(myRange, 10, 20);

//     if (size < 0) {
//         printf("Memory allocation error\n");
//         return 1; // Exit with an error code
//     } else if (size == 0) {
//         printf("No valid range\n");
//     } else {
//         printf("Range values: ");
//         for (int i = 0; i < size; i++) {
//             printf("%d ", *(myRange)[i]);
//         }
//         printf("\n");

//         // Don't forget to free the memory when done
//         free(myRange);
//     }

//     return 0; // Exit successfully
// }