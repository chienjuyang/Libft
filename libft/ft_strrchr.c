/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cyang <cyang@student.42tokyo.jp>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/28 15:25:28 by cyang             #+#    #+#             */
/*   Updated: 2025/05/16 15:13:57 by cyang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	unsigned char	uc;
	size_t			i;

	uc = (unsigned char)c;
	i = ft_strlen(s);
	if (uc == '\0')
		return ((char *)&s[i]);
	while (i > 0)
	{
		i--;
		if ((unsigned char)s[i] == uc)
			return ((char *)&s[i]);
	}
	return (NULL);
}

// #include <stdio.h>
// #include <string.h>

// int	main(void)
// {
// 	const char s1[] = "Banana";
// 	int	keyword1 = '\0';
// 	printf("%s\n", ft_strrchr(s1, keyword1));
// 	printf("%s\n", strrchr(s1, keyword1));

// 	const char s2[] = "Banana";
// 	int	keyword2 = 'n';
// 	printf("%s\n", ft_strrchr(s2, keyword2));
// 	printf("%s\n", strrchr(s2, keyword2));
// 	return (0);
// }