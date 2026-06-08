/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cyang <cyang@student.42tokyo.jp>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/02 17:41:36 by cyang             #+#    #+#             */
/*   Updated: 2025/05/04 13:26:44 by cyang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>
#include <limits.h>

static int	ft_digit_count(long n)
{
	int	len;

	len = 0;
	if (n < 0)
	{
		len++;
		n = -n;
	}
	while (n > 0)
	{
		n = n / 10;
		len++;
	}
	return (len);
}

char	*ft_itoa(int n)
{
	char	*result;
	int		len;
	long	nb;

	nb = (long)n;
	if (nb == 0)
		return (ft_strdup("0"));
	len = ft_digit_count(nb);
	result = malloc(sizeof(char) * (len + 1));
	if (result == NULL)
		return (NULL);
	result[len] = '\0';
	if (nb < 0)
	{
		result[0] = '-';
		nb = -nb;
	}
	while (nb > 0)
	{
		result[len - 1] = nb % 10 + '0';
		nb = nb / 10;
		len--;
	}
	return (result);
}

// #include <stdio.h>

// int	main(void)
// {
// 	int	n = -2147483648;
// 	char *nb;

// 	nb = ft_itoa(n);
// 	printf("%s\n", nb);
// 	free (nb);
// 	return (0);
// }