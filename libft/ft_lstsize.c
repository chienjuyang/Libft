/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cyang <cyang@student.42tokyo.jp>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/09 17:53:48 by cyang             #+#    #+#             */
/*   Updated: 2025/05/11 10:42:11 by cyang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	int		count;
	t_list	*current;

	count = 0;
	current = lst;
	while (current)
	{
		count++;
		current = current->next;
	}
	return (count);
}

// #include <stdio.h>

// int	main(void)
// {
// 	int	size;
// 	t_list	*head = NULL;
// 	t_list	*node1 = ft_lstnew("va");
// 	t_list	*node2 = ft_lstnew("ca");

// 	ft_lstadd_front(&head, node1);
// 	ft_lstadd_front(&head, node2);
// 	size = ft_lstsize(head);
// 	printf("%i\n", size);
// 	free(node1);
// 	free(node2);
// 	return(0);
// }
