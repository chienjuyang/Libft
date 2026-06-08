/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cyang <cyang@student.42tokyo.jp>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/28 17:34:39 by cyang             #+#    #+#             */
/*   Updated: 2025/07/02 16:17:57 by cyang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
// #include <limits.h>

static int	ft_sign(const char *str, int *i)
{
	int	minus;
	int	sign;

	minus = 1;
	sign = 0;
	while (str[*i] == '-' || str[*i] == '+')
	{
		if (str[*i] == '-')
			minus = -1;
		sign++;
		(*i)++;
		if (sign > 1)
			return (0);
	}
	return (minus);
}

int	ft_atoi(const char*str)
{
	int			i;
	long long	num;
	int			minus;

	i = 0;
	while (str[i] == ' ' || (str[i] >= 9 && str[i] <= 13))
		i++;
	minus = ft_sign(str, &i);
	if (minus == 0)
		return (0);
	num = 0;
	while (str[i] >= '0' && str[i] <= '9')
	{
		num = (num * 10 + str[i] - '0');
		if ((minus == 1 && num > INT_MAX)
			|| (minus == -1 && (-num) < INT_MIN))
			return (0);
		i++;
	}
	if (str[i])
		return (0);
	return ((int)num * minus);
}

// #include <stdio.h>
// #include <stdlib.h>

// int	main(void)
// {
// 	const char str[] = "2147483648";
// 	printf("%d\n", ft_atoi(str));
// 	printf("%d\n", atoi(str));
// 	return (0);
// }