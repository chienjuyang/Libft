/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cyang <cyang@student.42tokyo.jp>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/30 13:33:13 by cyang             #+#    #+#             */
/*   Updated: 2025/05/23 15:32:00 by cyang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	size_t			space;
	unsigned char	*ptr;

	if (count == 0 || size == 0)
	{
		ptr = malloc(1);
		if (ptr == NULL)
			return (NULL);
		ptr[0] = 0;
		return (ptr);
	}
	if (count > SIZE_MAX / size)
		return (NULL);
	space = count * size;
	ptr = malloc(space);
	if (ptr == NULL)
		return (NULL);
	ft_bzero(ptr, space);
	return (ptr);
}

// #include <stdio.h>
// #include <string.h>

// int	main(void)
// {
// 	size_t i = 0;
// 	size_t count = 3;
// 	char *a = ft_calloc(count, sizeof(char));
// 	char *b = calloc(count, sizeof(char));

// 	while (i < count)
// 	{
// 		printf("%d", a[i]);
// 		i++;
// 	}
// 	printf("\n");
// 	i = 0;
// 	while (i < count)
// 	{
// 		printf("%d", b[i]);
// 		i++;
// 	}
// 	printf("\n");
// 	free (a);
// 	free (b);
// 	return (0);
// }