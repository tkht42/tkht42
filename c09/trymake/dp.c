/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   dp.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taimai <taimai@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/27 13:53:33 by taimai            #+#    #+#             */
/*   Updated: 2023/08/27 14:10:58 by taimai           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int is_splits(char c, char *charset) {
    while (*charset) {
        if (c == *charset) {
            return 1; // It's a separator
        }
        charset++;
    }
    return 0; // It's not a separator
}

int count_strings(char *str, char *charset) {
    int count = 0;
    int inside_word = 0;

    while (*str) {
        if (is_splits(*str, charset)) {
            inside_word = 0;
        } else if (!inside_word) {
            inside_word = 1;
            count++;
        }
        str++;
    }

    return count;
}

char **ft_split(char *str, char *charset) {
    int num_strings = count_strings(str, charset);
    char **result = (char **)malloc((num_strings + 1) * sizeof(char *));
    
    if (result == NULL) {
        return NULL; // Memory allocation failed
    }

    int i = 0;
    int inside_word = 0;
    char *word_start = NULL;

    while (*str) {
        if (is_splits(*str, charset)) {
            if (inside_word) {
                int word_length = str - word_start;
                result[i] = (char *)malloc((word_length + 1) * sizeof(char));
                if (result[i] == NULL) {
                    // Clean up and return NULL if memory allocation fails
                    for (int j = 0; j < i; j++) {
                        free(result[j]);
                    }
                    free(result);
                    return NULL;
                }
                strncpy(result[i], word_start, word_length);
                result[i][word_length] = '\0';
                i++;
                inside_word = 0;
            }
        } else if (!inside_word) {
            word_start = str;
            inside_word = 1;
        }
        str++;
    }

    result[num_strings] = NULL; // Null-terminate the result array
    return result;
}

void free_split_result(char **result) {
    if (result == NULL) {
        return;
    }

    // Free each allocated string
    for (int i = 0; result[i] != NULL; i++) {
        free(result[i]);
    }

    // Free the array of pointers
    free(result);
}

int main() {
    char *str = "This,is,a,test";
    char *charset = ",";

    char **result = ft_split(str, charset);

    if (result == NULL) {
        printf("Memory allocation failed.\n");
        return 1;
    }

    for (int i = 0; result[i] != NULL; i++) {
        printf("%s\n", result[i]);
    }

    free_split_result(result);

    return 0;
}
