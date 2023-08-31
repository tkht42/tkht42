/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taimai <taimai@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/22 20:11:00 by taimai            #+#    #+#             */
/*   Updated: 2023/08/25 19:27:21 by taimai           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <unistd.h>

int	*ft_range(int min, int max)
{
	int	size;
	int	i;
	int	*range;

	i = 0;
	size = max - min;
	range = malloc(sizeof(int) * size);
	if (max <= min)
		return (NULL);
	while (i < size)
	{
		range[i] = min + i;
		i++;
	}
	return (range);
}

//  #include <stdio.h>
// #include <stdlib.h>

// int *ft_range(int min, int max);

// int main() {
//     int min = 0;
//     int max = 0;

//     int *result = ft_range(min, max);

//     if (result == NULL) {
//         printf("Error: Invalid range or memory allocation failed.\n");
//         return 1; // Return an error code
//     }

//     printf("Array elements between %d and %d:\n", min, max);
//     for (int i = 0; i < max - min; i++) {
//         printf("%d ", result[i]);
//     }
//     printf("\n");

//     // Don't forget to free the dynamically allocated memory
//     free(result);

//     return 0; // Return 0 to indicate successful execution
// }