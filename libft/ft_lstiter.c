/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cyang <cyang@student.42tokyo.jp>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/11 09:27:28 by cyang             #+#    #+#             */
/*   Updated: 2025/05/11 13:12:41 by cyang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	t_list	*current;

	if (lst == NULL || f == NULL)
		return ;
	current = lst;
	while (current)
	{
		f(current->content);
		current = current->next;
	}
}

// #include <stdio.h>

// void print(void *content)
// {
//     printf("%s\n", (char *)content);
// }

// int main(void) {
//     t_list *node1 = ft_lstnew("Bonjour");
//     t_list *node2 = ft_lstnew("ca");
//     t_list *node3 = ft_lstnew("va");

//     node1->next = node2;
//     node2->next = node3;
//     node3->next = NULL;

//     ft_lstiter(node1, print_content);

//     free(node1);
//     free(node2);
//     free(node3);
//     return (0);
// }
