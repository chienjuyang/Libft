/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cyang <cyang@student.42tokyo.jp>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/27 13:18:14 by cyang             #+#    #+#             */
/*   Updated: 2025/05/04 13:40:50 by cyang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_toupper(int c)
{
	if (c >= 'a' && c <= 'z')
		return (c - 32);
	else
		return (c);
}

// #include <stdio.h>
// #include <ctype.h>
// int	main(void)
// {
// 	char a[] = "2you!";
// 	char b[] = "2you!";
// 	int	i =0;
// 	while (a[i])
// 	{
// 		printf("%c", ft_toupper(a[i]));
// 		i++;
// 	}
// 	printf("\n");
// 	i = 0;
// 	while (b[i])
// 	{
// 		printf("%c", toupper(b[i]));
// 		i++;
// 	}
// 	printf("\n");
// 	return(0);
// }