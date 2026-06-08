/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cyang <cyang@student.42tokyo.jp>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/02 15:10:04 by cyang             #+#    #+#             */
/*   Updated: 2025/05/16 15:04:07 by cyang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	s1_len;
	size_t	s2_len;
	char	*dest;

	if (s1 == NULL || s2 == NULL)
		return (NULL);
	s1_len = ft_strlen(s1);
	s2_len = ft_strlen(s2);
	dest = malloc(sizeof(char) * (s1_len + s2_len + 1));
	if (dest == NULL)
		return (NULL);
	ft_memcpy(dest, s1, s1_len);
	ft_memcpy(dest + s1_len, s2, s2_len);
	dest[s1_len + s2_len] = '\0';
	return (dest);
}

// #include <stdio.h>

// int	main(void)
// {
// 	char s1[] = "Bon";
// 	char s2[] = "jour";

// 	char *join;

// 	join = ft_strjoin(s1, s2);
// 	printf("%s\n", join);
// 	free (join);
// 	return (0);
// }
