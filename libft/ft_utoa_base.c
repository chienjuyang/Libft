/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_utoa_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cyang <cyang@student.42tokyo.jp>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/23 16:31:58 by cyang             #+#    #+#             */
/*   Updated: 2025/07/21 14:00:37 by cyang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_digit_count(uintptr_t n, int base_len)
{
	int	count;

	count = 0;
	if (n == 0)
		return (1);
	while (n > 0)
	{
		n = n / base_len;
		count++;
	}
	return (count);
}

char	*ft_utoa_base(uintptr_t n, const char *base)
{
	char		*str;
	int			base_len;
	int			len;
	uintptr_t	temp;

	base_len = 0;
	while (base[base_len])
		base_len++;
	if (base_len < 2)
		return (NULL);
	len = ft_digit_count(n, base_len);
	str = malloc(sizeof(char) * (len + 1));
	if (str == NULL)
		return (NULL);
	str[len] = '\0';
	if (n == 0)
		str[0] = base[0];
	while (n > 0)
	{
		temp = n % base_len;
		str[len - 1] = base[temp];
		n = n / base_len;
		len--;
	}
	return (str);
}

// #include <stdio.h>

// int	main(void)
// {
// 	char	*result;
// 	int	num = 209403;
// 	char *base = "0123456789";
// 	result = ft_utoa_base(num ,base);
// 	printf("%s\n", result);
// 	free(result);
// 	return (0);
// }