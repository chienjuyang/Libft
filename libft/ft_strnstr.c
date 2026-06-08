/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cyang <cyang@student.42tokyo.jp>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/28 17:06:17 by cyang             #+#    #+#             */
/*   Updated: 2025/07/02 16:04:21 by cyang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	start;
	size_t	j;

	if (little[0] == '\0')
		return ((char *)big);
	if (big == NULL && len == 0)
		return (NULL);
	if (len == 0 || ft_strlen(little) > len)
		return (NULL);
	start = 0;
	while (big[start] && start < len)
	{
		j = 0;
		while (big[start + j] && little[j] && big[start + j] == little[j]
			&& (start + j) < len)
		{
			j++;
		}
		if (little[j] == '\0')
			return ((char *)&big[start]);
		start++;
	}
	return (NULL);
}

// #include <stdio.h>
// #include <string.h>
// int	main(void)
// {
// 	printf("%s\n", ft_strnstr("Banana", "", 0));
// 	printf("%s\n", ft_strnstr("Banana", "na", 2));
// 	printf("%s\n", ft_strnstr("Banana", "na", 4));
// 	return (0);
// }