/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cyang <cyang@student.42tokyo.jp>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/27 10:50:59 by cyang             #+#    #+#             */
/*   Updated: 2025/05/04 12:59:57 by cyang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	return (0);
}

// #include <stdio.h>
// #include <ctype.h>

// int	main(void)
// {
// 	char c = '4';
// 	if (ft_isdigit(c) != 0  && isdigit(c) != 0)
// 	{
// 		printf("%i\n", ft_isdigit(c));
// 		printf("%i\n", isdigit(c));
// 		printf("is digit.\n");
// 	}
// 	else
// 		printf("is not digit.\n");
// 	return (0);
// }
