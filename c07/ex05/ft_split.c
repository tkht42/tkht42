/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taimai <taimai@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/31 14:10:15 by taimai            #+#    #+#             */
/*   Updated: 2023/08/31 18:40:55 by taimai           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	is_sep(char c, char *charset)
{
	while (*charset)
	{
		if (c == *charset)
			return (1);
		charset++;
	}
	return (0);
}

char	*ft_strdup(char *src, int *start, int *end)
{
	char	*dest;
	int		i;

	dest = malloc((*end - *start + 1) + 1);
	i = 0;
	while (*start + i <= *end)
	{
		dest[i] = *(src + *start + i);
		i++;
	}
	dest[i] = '\0';
	*start = -1;
	*end = -1;
	return (dest);
}

int	count_strings(char *str, char *charset)
{
	int	match;
	int	i;

	match = 0;
	i = 0;
	while (str[i] != '\0')
	{
		if (i == 0)
		{
			if (!is_sep(str[i], charset))
				match++;
		}
		else
		{
			if (!is_sep(str[i], charset) && is_sep(str[i - 1], charset))
				match++;
		}
		i++;
	}
	return (match);
}

char	**ft_split(char *str, char *charset)
{
	int		i;
	char	**ret;
	int		start;
	int		end;

	ret = (char **)malloc(sizeof(char *) * (count_strings(str, charset) + 1));
	i = 0;
	start = -1;
	end = -1;
	while (str[i] != '\0')
	{
		if ((i == 0 && !is_sep(str[i], charset))
			|| (i > 0 && !is_sep(str[i], charset)
				&& is_sep(str[i - 1], charset)))
			start = i;
		if ((!is_sep(str[i], charset) && is_sep(str[i + 1], charset))
			|| (!is_sep(str[i], charset) && str[i + 1] == '\0'))
			end = i;
		if (start != -1 && end != -1)
			*ret++ = ft_strdup(str, &start, &end);
		i++;
	}
	*ret = 0;
	return (ret - count_strings(str, charset));
}

// #include <stdio.h>

// int main() {
//     char *str = "Hello,World! This is a test.";
//     char *delimiters = " ,!"; // Delimiter characters

//     char **result = ft_split(str, delimiters);

//     // Print the split words
//     for (int i = 0; result[i]; i++) {
//         printf("%s\n", result[i]);
//         free(result[i]); // Free the memory for each substring
//     }

//     free(result); // Free the array of pointers

//     return 0;
// }