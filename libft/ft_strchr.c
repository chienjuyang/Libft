/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cyang <cyang@student.42tokyo.jp>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/28 13:51:31 by cyang             #+#    #+#             */
/*   Updated: 2025/05/04 11:49:20 by cyang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_strchr(const char *s, int c)
{
	unsigned char	uc;
	size_t			i;

	uc = (unsigned char)c;
	i = 0;
	while (s[i])
	{
		if ((unsigned char)s[i] == uc)
		{
			return ((char *)&s[i]);
		}
		i++;
	}
	if (uc == '\0')
		return ((char *)&s[i]);
	return (NULL);
}

// #include <stdio.h>
// #include <string.h>

// int	main(void)
// {
// 	const char s1[] = "Bonjour";
// 	int	keyword1 = 'j';
// 	printf("%s\n", ft_strchr(s1, keyword1));
// 	printf("%s\n", strchr(s1, keyword1));

// 	const char s2[] = "Bonjour";
// 	int	keyword2 = '\0';
// 	printf("%s\n", ft_strchr(s2, keyword2));
// 	printf("%s\n", strchr(s2, keyword2));
// 	return (0);
// }