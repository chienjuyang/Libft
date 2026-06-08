/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cyang <cyang@student.42tokyo.jp>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/09 18:07:36 by cyang             #+#    #+#             */
/*   Updated: 2025/05/11 10:42:24 by cyang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	t_list	*current;

	if (lst == NULL)
		return (NULL);
	current = lst;
	while (current->next)
	{
		current = current->next;
	}
	return (current);
}

// #include <stdio.h>

// int	main(void)
// {
// 	t_list	*current;
// 	t_list	*node1 = ft_lstnew("one");
// 	t_list	*node2 = ft_lstnew("two");
// 	t_list	*node3 = ft_lstnew("three");
// 	current = node1;
// 	node1->next = node2;
// 	node2->next = node3;
// 	printf("%s\n", (char *)ft_lstlast(current)->content);
// 	free(node1);
// 	free(node2);
// 	free(node3);
// 	return (0);
// }