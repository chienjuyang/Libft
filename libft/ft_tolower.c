/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cyang <cyang@student.42tokyo.jp>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/27 13:44:57 by cyang             #+#    #+#             */
/*   Updated: 2025/05/04 13:40:41 by cyang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_tolower(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (c + 32);
	else
		return (c);
}

// #include <stdio.h>
// #include <ctype.h>
// int	main(void)
// {
// 	char a[] = "2YOU!";
// 	char b[] = "2YOU!";
// 	int	i =0;
// 	while (a[i])
// 	{
// 		printf("%c", ft_tolower(a[i]));
// 		i++;
// 	}
// 	printf("\n");
// 	i = 0;
// 	while (b[i])
// 	{
// 		printf("%c", tolower(b[i]));
// 		i++;
// 	}
// 	printf("\n");
// 	return(0);
// }