/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cyang <cyang@student.42tokyo.jp>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/27 15:03:45 by cyang             #+#    #+#             */
/*   Updated: 2025/05/18 16:17:50 by cyang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t destsize)
{
	size_t	destlen;
	size_t	srclen;
	size_t	i;
	size_t	j;

	if (src == NULL && dest == NULL)
		return (0);
	if (src == NULL)
		return (ft_strlen(dest));
	srclen = ft_strlen(src);
	if (dest == NULL)
		return (srclen);
	destlen = ft_strlen(dest);
	if (destsize == 0 || destsize <= destlen)
		return (destsize + srclen);
	i = destlen;
	j = 0;
	while (i < (destsize - 1) && src[j])
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (destlen + srclen);
}

// #include <stdio.h>
// #include <string.h>

// int	main(void)
// {
// 	char dest1[] = "wel";
// 	char src1[] = "come!";

// 	printf("%zu\n", (ft_strlcat(dest1, src1, 8)));
// 	printf("%s\n", dest1);
// 	return (0);
// }