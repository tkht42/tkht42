/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taimai <taimai@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/13 17:44:33 by taimai            #+#    #+#             */
/*   Updated: 2023/08/13 21:22:14 by taimai           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void print_combinations()
{
	for (int i = 0; i < 10; i++) {
		for (int j = i + 1; j < 10; j++) {
            printf("%02d %02d\n", i, j);
        }
    }
}

int main() {
    print_combinations();
    return 0;
}
