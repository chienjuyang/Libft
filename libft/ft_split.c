/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cyang <cyang@student.42tokyo.jp>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/03 13:46:57 by cyang             #+#    #+#             */
/*   Updated: 2025/05/16 14:54:49 by cyang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

static int	ft_wordct(const char *s, char c)
{
	int	word;
	int	i;

	word = 0;
	i = 0;
	while (s[i])
	{
		if (s[i] != c && (i == 0 || s[i - 1] == c))
			word++;
		i++;
	}
	return (word);
}

static int	ft_word_len(const char *s, char c)
{
	int	len;

	len = 0;
	while (s[len] && s[len] != c)
	{
		len++;
	}
	return (len);
}

static char	*ft_wordcpy(const char *s, char c)
{
	int		len;
	char	*word;
	int		i;

	len = ft_word_len(s, c);
	word = malloc(sizeof(char) * (len + 1));
	i = 0;
	if (word == NULL)
		return (NULL);
	while (i < len)
	{
		word[i] = s[i];
		i++;
	}
	word[i] = '\0';
	return (word);
}

static void	ft_free_all(char **array)
{
	int	i;

	i = 0;
	while (array[i])
	{
		free(array[i]);
		i++;
	}
	free(array);
}

char	**ft_split(char const *s, char c)
{
	char	**result;
	int		i;

	i = 0;
	if (s == NULL)
		return (NULL);
	result = malloc(sizeof(char *) * (ft_wordct(s, c) + 1));
	if (result == NULL)
		return (NULL);
	while (*s)
	{
		if (*s != c)
		{
			result[i] = ft_wordcpy(s, c);
			if (result[i] == NULL)
				return (ft_free_all(result), NULL);
			s = s + ft_word_len(s, c);
			i++;
		}
		else
			s++;
	}
	result[i] = NULL;
	return (result);
}

// #include <stdio.h>

// int	main(void)
// {
// 	char **result;
// 	int	i = 0;
// 	char	s[] = "Bonjour/ca/va";
// 	char	c = '/';
// 	result = ft_split(s, c);
// 	while (result && result[i])
// 	{
// 		printf("%s\n", result[i]);
// 		i++;
// 	}
// 	ft_free_all(result);
// 	return (0);
// }
