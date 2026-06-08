/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cyang <cyang@student.42tokyo.jp>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/11 09:31:24 by cyang             #+#    #+#             */
/*   Updated: 2025/05/16 14:46:46 by cyang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new_list;
	t_list	*new_node;
	void	*content;

	if (lst == NULL || f == NULL || del == NULL)
		return (NULL);
	new_list = NULL;
	while (lst)
	{
		content = f(lst->content);
		new_node = ft_lstnew(content);
		if (content == NULL || new_node == NULL)
		{
			if (content)
				del(content);
			ft_lstclear(&new_list, del);
			return (NULL);
		}
		ft_lstadd_back(&new_list, new_node);
		lst = lst->next;
	}
	return (new_list);
}

// #include <stdio.h>

// void	*ft_upper(void *content)
// {
// 	char	*str;
// 	char	*new;
// 	int		i;
// 	str = (char *)content;
// 	new = ft_strdup(str);
// 	if (new == NULL)
// 		return (NULL);
// 	i = 0;
// 	while (new[i])
// 	{
// 		if (new[i] >= 'a' && new[i] <= 'z')
// 			new[i] = new[i] -32;
// 		i++;
// 	}
// 	return (new);
// }

// void	del_content(void *content)
// {
//     free(content);
// }

// int main(void) 
// {    
// 	t_list	*new_list;
// 	t_list	*current;
// 	t_list	*node1 = ft_lstnew(ft_strdup("hello"));
//     t_list	*node2 = ft_lstnew(ft_strdup("world"));
//     node1->next = node2;
// 	new_list = ft_lstmap(node1, ft_upper, del_content);
// 	current = new_list;
//     while (current)
// 	{
// 		printf("%s\n", (char *)current->content);
// 		current = current->next;
// 	}
//     ft_lstclear(&node1, del_content);
//     ft_lstclear(&new_list, del_content);
//     return (0);
// }
