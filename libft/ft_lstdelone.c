/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cyang <cyang@student.42tokyo.jp>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/10 13:02:31 by cyang             #+#    #+#             */
/*   Updated: 2025/05/10 14:01:46 by cyang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdelone(t_list *lst, void (*del)(void*))
{
	if (lst == NULL)
		return ;
	if (del)
	{
		del(lst->content);
	}
	free(lst);
}

// #include <stdio.h>

// void	deleter(void *content)
// {
// 	free(content);
// }

// int	main(void)
// {
// 	t_list	*node = ft_lstnew(ft_strdup("one"));
// 	printf("%s\n", (char *)node->content);
// 	ft_lstdelone(node, deleter);
// 	return (0);
// }