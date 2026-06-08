/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cyang <cyang@student.42tokyo.jp>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/27 10:34:08 by cyang             #+#    #+#             */
/*   Updated: 2025/05/04 13:00:18 by cyang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalpha(int c)
{
	if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
		return (1);
	return (0);
}
// #include <stdio.h>
// #include <ctype.h>

// int	main(void)
// {
// 	char c = 'A';	
// 	if (ft_isalpha(c) != 0  && isalpha(c) != 0)
// 	{
// 		printf("%d\n", ft_isalpha(c));
// 		printf("%d\n", isalpha(c));
// 		printf("is alphabet.\n");
// 	}
// 	else
// 		printf("is not alphabet.\n");
// 	return (0);
// }