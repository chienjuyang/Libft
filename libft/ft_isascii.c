/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cyang <cyang@student.42tokyo.jp>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/27 12:03:13 by cyang             #+#    #+#             */
/*   Updated: 2025/05/04 12:59:47 by cyang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isascii(int c)
{
	if (c >= 0 && c <= 127)
		return (1);
	return (0);
}
// #include <stdio.h>
// #include <ctype.h>

// int	main(void)
// {
// 	char c[] = "c@9";
// 	int	i = 0;

// 	while (c[i])
// 	{
// 		if (ft_isascii(c[i]) != 0  && isascii(c[i]) != 0)
// 		{
// 			printf("%i\n", ft_isascii(c[i]));
// 			printf("%i\n", isascii(c[i]));
// 			printf("Is it ascii? ○\n");
// 		}
// 		else
// 			printf("Is it ascii? ☓\n");
// 		i++;
// 	}
// 	return (0);
// }