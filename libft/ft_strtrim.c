/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cyang <cyang@student.42tokyo.jp>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/02 15:56:13 by cyang             #+#    #+#             */
/*   Updated: 2025/05/16 15:13:49 by cyang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*ft_empty(void)
{
	char	*empty;

	empty = malloc(1);
	if (empty == NULL)
		return (NULL);
	empty[0] = '\0';
	return (empty);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	start;
	size_t	end;
	size_t	destlen;
	char	*dest;

	if (s1 == NULL || set == NULL)
		return (NULL);
	start = 0;
	end = ft_strlen(s1);
	while (s1[start] && ft_strchr(set, s1[start]))
		start++;
	while (end > start && ft_strchr(set, s1[end - 1]))
		end--;
	if (start >= end)
		return (ft_empty());
	destlen = end - start;
	dest = malloc (sizeof(char) * (destlen + 1));
	if (dest == NULL)
		return (NULL);
	ft_memcpy(dest, s1 + start, destlen);
	dest[destlen] = '\0';
	return (dest);
}

// #include <stdio.h>

// int	main(void)
// {
// 	char s1[] = "bonjour";
// 	char set[] = "boj";

// 	char *aftertrim;

// 	aftertrim = ft_strtrim(s1, set);
// 	printf("%s\n", aftertrim);
// 	free (aftertrim);
// 	return (0);
// }
