/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cyang <cyang@student.42tokyo.jp>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/27 13:02:34 by cyang             #+#    #+#             */
/*   Updated: 2025/05/04 13:00:08 by cyang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isprint(int c)
{
	if (c < 32 || c > 126)
	{
		return (0);
	}
	return (1);
}

// #include <stdio.h>
// #include <ctype.h>

// int	main(void)
// {
// 	char c[] = "c\t@9\n";
// 	int	i = 0;

// 	while (c[i])
// 	{
// 		if (ft_isprint(c[i]) != 0  && isprint(c[i]) != 0)
// 		{
// 			printf("%i\n", ft_isprint(c[i]));
// 			printf("%i\n", isprint(c[i]));
// 			printf("Is it printable? ○\n");
// 		}
// 		else
// 			printf("Is it printable? ☓\n");
// 		i++;
// 	}
// 	return (0);
// }