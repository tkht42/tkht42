/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taimai <taimai@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/24 16:11:56 by taimai            #+#    #+#             */
/*   Updated: 2023/08/27 14:36:36 by taimai           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>


int	is_splits(char t, char *set)
{
	while (*set)
	{
		if (t == *set)
			return (1);
		set++;
	}
	return (0);
}

int	count_strings(char *str, char *charset)
{
	int	count = 0;
	int	inside_word = 0;
	while (*str)
	{
		if (is_splits(*str, charset))
		{
			inside_word = 0;
		}
		else if (!inside_word)
		{
            inside_word = 1;
            count++;
		}
		str++;
	}
	return (count);
}

// char	*im_strcpy(char *dest, char *src)
// {
// 	int	i;

// 	i = 0;
// 	while (src[i] != '\0')
// 	{
// 		dest[i] = src[i];
// 		i++;
// 	}
// 	dest[i] = '\0';
// 	return (dest);
// }

// int	counter_splits(char *str, char *charset)
// {
// 	int		i;
// 	int		splits;
// 	char	*dest;

// 	i = 0;
// 	splits = 0;
// 	while (str[i])
// 	{
// 		while (str[i] && val_splits(str[i], charset))
// 		{
// 			i++;
// 			splits++;
// 		}
// 		while (str[i] && !val_splits(str[i], charset))
// 		{
// 			i++;
// 		}
// 	}
// 	return (splits);
// }

// char	**mallocker(int	size, char **dest)
// [
// 	dest =
// ]
char	**ft_split(char *str, char *charset)
{
	int	num_strings = count_strings(str, charset);
	char	**result = (char **)malloc((num_strings + 1) * sizeof(char	*));
	if (result == NULL)
	{
		return (NULL); // Memory allocation failed
	}
	int	i = 0;
	int	inside_word = 0;
	char	*word_start = NULL;
	while (*str)
	{
		if (is_splits(*str, charset))
		{
			if (inside_word)
			{
				*result = (char *)malloc((str - word_start + 1) * sizeof(char));
				if (*result == NULL)
				{
					return (NULL);
				}
				int	j = 0;
				while (word_start != str)
				{
					(*result)[j++] = *word_start++;
				}
				(*result)[j] = '\0';
                result++;
                inside_word = 0;
			}
		}
		else if (!inside_word)
		{
			word_start = str;
			inside_word = 1;
		}
		str++;
	}
	*result = 0;
	return (result - num_strings);
}

#include <stdio.h>

int main() {
    char *str = "This,is,a,test";
    char *charset = ",";

    char **result = ft_split(str, charset);

    while (*result) {
        printf("%s\n", *result);
        free(*result); // Free each allocated string
        result++;
    }

    free(result); // Free the array of pointers

    return 0;
}

// char	**ft_split(char *str, char *charset)
// {
// 	int		i;
// 	int		j;
// 	char	**dest;

// 	i = 0;
// 	j = 0;   /*len = all - splits*/

// 	while (str[i])
// 	{
// 		while (str[i] && val_splits(str[i], charset))
// 		{
// 			while (str[i] && !val_splits(str[i], charset))
// 			{
// 				i++:
// 				j++;
// 			}
// 			i++;
// 		}
// 		while (str[i] && !val_splits(str[i], charset))
// 		{
// 			}
// 		}
// 	}
// }
