/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cyang <cyang@student.42tokyo.jp>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/03 11:40:08 by cyang             #+#    #+#             */
/*   Updated: 2025/05/16 15:14:27 by cyang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	size_t			len;
	unsigned int	i;
	char			*result;

	if (s == NULL || f == NULL)
		return (NULL);
	len = ft_strlen(s);
	result = malloc(sizeof(char) * (len + 1));
	if (result == NULL)
		return (NULL);
	i = 0;
	while (i < len)
	{
		result[i] = f(i, s[i]);
		i++;
	}
	result[i] = '\0';
	return (result);
}

// #include <stdio.h>

// char	ft_next_char(unsigned int i, char c)
// {	
// 	i = 1;
// 	if ((c >= 'a' && c < 'z') || (c >= 'A' || c < 'Z'))
// 		return (c + i);
// 	return (c);
// }

// int	main(void)
// {
// 	char s[] = "ABCabc";
// 	char *result;

// 	result = ft_strmapi(s, ft_next_char);
// 	printf("%s", result);
// 	free(result);
// 	return (0);
// }