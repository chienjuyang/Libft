/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_utoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cyang <cyang@student.42tokyo.jp>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/02 17:41:36 by cyang             #+#    #+#             */
/*   Updated: 2025/05/26 17:17:41 by cyang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_digit_count(unsigned int n)
{
	unsigned int	len;

	len = 0;
	while (n > 0)
	{
		n = n / 10;
		len++;
	}
	return (len);
}

char	*ft_utoa(unsigned int n)
{
	char			*result;
	unsigned int	len;

	if (n == 0)
		return (ft_strdup("0"));
	len = ft_digit_count(n);
	result = malloc(sizeof(char) * (len + 1));
	if (result == NULL)
		return (NULL);
	result[len] = '\0';
	while (n > 0)
	{
		result[len - 1] = n % 10 + '0';
		n = n / 10;
		len--;
	}
	return (result);
}

// #include <stdio.h>

// int	main(void)
// {
// 	unsigned int	n = 4147483650;
// 	char *nb;

// 	nb = ft_utoa(n);
// 	printf("%s\n", nb);
// 	free (nb);
// 	return (0);
// }