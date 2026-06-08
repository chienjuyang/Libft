/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cyang <cyang@student.42tokyo.jp>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/03 12:43:39 by cyang             #+#    #+#             */
/*   Updated: 2025/05/04 11:49:27 by cyang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	unsigned int	i;

	if (s == NULL || f == NULL)
		return ;
	i = 0;
	while (s[i])
	{
		f(i, &s[i]);
		i++;
	}
}

// #include <stdio.h>

// void	ft_strnext(unsigned int i, char *c)
// {
// 	i = 1;
// 	if ((*c >= 'a' && *c < 'z') || (*c >= 'A' || *c < 'Z'))
// 	{
// 		*c = *c + i;
// 	}
// }

// int	main(void)
// {
// 	char s[] = "ABCabc";

// 	ft_striteri(s, *ft_strnext);
// 	printf("%s", s);
// 	return (0);
// }