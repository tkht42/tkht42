/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taimai <taimai@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/23 10:57:11 by taimai            #+#    #+#             */
/*   Updated: 2023/08/31 19:01:49 by taimai           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <unistd.h>

int	lengther(char *str)
{
	int	length;
	int	i;

	i = 0;
	length = 0;
	while (str[i])
	{
		i++;
		length++;
	}
	return (length);
}

int	total_length(int size, char **strs, char *sep)
{
	int	i;
	int	total_length;

	i = 0;
	total_length = 0;
	while (i < size)
	{
		total_length += lengther(strs[i]);
		if (i < size - 1)
		{
			total_length += lengther(sep);
		}
		i++;
	}
	return (total_length);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*result;
	int		i;
	int		j;
	int		k;
	int		len;

	len = total_length(size, strs, sep);
	i = 0;
	k = 0;
	if (size == 0)
		return (NULL);
	result = malloc(len + 1);
	while (i < size)
	{
		j = 0;
		while (strs[i][j])
			result[k++] = strs[i][j++];
		j = 0;
		while (sep[j] && i < size - 1)
			result[k++] = sep[j++];
		i++;
	}
	result[len] = '\0';
	return (result);
}

// #include <stdio.h>
// int lengther(char *str);
// char *ft_strjoin(int size, char **strs, char *sep);

// int main() {
//     char *words[] = {"Hello", "world", "this", "is", "a", "test"};
//     char *separator = " ";

//     int size = sizeof(words) / sizeof(words[0]);

//     char *result = ft_strjoin(size, words, separator);

//     if (result == NULL) {
//         printf("Memory allocation failed.\n");
//         return 1;
//     }

//     printf("Concatenated string: %s\n", result);

//     free(result); // Don't forget to free the allocated memory.

//     return 0;
// }