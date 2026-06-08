/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cyang <cyang@student.42tokyo.jp>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/10 12:39:25 by cyang             #+#    #+#             */
/*   Updated: 2025/05/11 13:12:08 by cyang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*last;

	if (lst == NULL || new == NULL)
		return ;
	if (*lst == NULL)
		*lst = new;
	else
	{
		last = ft_lstlast(*lst);
		last->next = new;
	}
}

// #include <stdio.h>

// int	main(void)
// {
// 	t_list	*current;
// 	t_list	*node1 = ft_lstnew("one");
// 	t_list	*node2 = ft_lstnew("two");
// 	t_list	*new = ft_lstnew("three");
// 	current = node1;
// 	node1->next = node2;
// 	ft_lstadd_back(&current, new);
// 	while (current)
// 	{
// 		printf("%s\n", (char *)current->content);
// 		current = current->next;
// 	}
// 	free(node1);
// 	free(node2);
// 	free(new);
// 	return (0);
// }