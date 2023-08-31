/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yuksaito <yuksaito@student.42tokyo.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/19 13:15:00 by yuksaito          #+#    #+#             */
/*   Updated: 2023/08/19 13:17:24 by yuksaito         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	print_error(void);
void	solve_skyscraper(char *conditions);

int	main(int argc, char **argv)
{
	if (argc == 2)
		solve_skyscraper(argv[1]);
	else
		print_error();
	return (0);
}
