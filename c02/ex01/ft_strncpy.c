/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taimai <taimai@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/15 13:53:13 by taimai            #+#    #+#             */
/*   Updated: 2023/08/19 15:43:44 by taimai           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (i < n)
	{
		if (src[i] != '\0')
		{
			dest[i] = src[i];
		}
		else
		{
			while (i < n)
			{	
				dest[i] = '\0';
				i++;
			}
			break ;
		}
		i++;
	}	
	return (dest);
}

// #include <stdio.h>

// int	main()
// {
//     char source[] = "Hello, World!";
//     char destination[] = "djljsjdjlwdjlssldjlljsjqlqssqlsd"; // 

//     // Copy at most 5 characters from source to destination
//     ft_strncpy(destination, source, 5);

//     // Print the result
//     printf("Source: %s\n", source);
//     printf("Destination: %s\n", destination);

//     return 0;
// }
