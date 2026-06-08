/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cyang <cyang@student.42tokyo.jp>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/27 10:56:50 by cyang             #+#    #+#             */
/*   Updated: 2025/07/02 16:09:21 by cyang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalnum(int c)
{
	if (((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z')
			|| (c >= '0' && c <= '9')))
		return (1);
	return (0);
}

// #include <stdio.h>
// #include <ctype.h>

// int	main(void)
// {
// 	char c[] = "Z@0";
// 	int	i = 0;

// 	while (c[i])
// 	{
// 		if (ft_isalnum(c[i]) != 0  && isalnum(c[i]) != 0)
// 		{
// 			printf("%i\n", ft_isalnum(c[i]));
// 			printf("%i\n", isalnum(c[i]));
// 			printf("Is it an alphabet or a digit? ○\n");
// 		}
// 		else
// 			printf("Is it an alphabet or a digit? ☓\n");
// 		i++;
// 	}
// 	return (0);
// }