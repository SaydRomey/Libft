/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdumais <cdumais@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/21 14:38:29 by cdumais           #+#    #+#             */
/*   Updated: 2023/02/27 12:59:52 by cdumais          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*last;

	if (!new)
		return ;
	if (!*lst)
	{
		*lst = new;
		return ;
	}
	last = ft_lstlast(*lst);
	last->next = new;
}

// #include "ft_lstnew.c"
// #include "ft_lstlast.c"

// int	main(void)
// {
// 	char	*content1;
// 	char	*content2;
// 	char	*content3;
// 	char	*new_content;
// 	t_list	*list1;
// 	t_list	*list2;
// 	t_list	*list3;
// 	t_list	*new_node;
// 	t_list	*current;

// 	content1 = "Node 1";
// 	content2 = "Node 2";
// 	content3 = "Node 3";
// 	new_content = "New node added to the end";
// 	list1 = ft_lstnew(content1);
// 	list2 = ft_lstnew(content2);
// 	list3 = ft_lstnew(content3);
// 	list1->next = list2;
// 	list2->next = list3;
// 	new_node = ft_lstnew(new_content);
// 	ft_lstadd_back(&list1, new_node);
// 	current = list1;
// 	while (current)
// 	{
// 		printf("\nContent of 'current' node : %s\n", (char*)current->content);
// 		printf("Next node pointer : %p\n", (void*)current->next);
// 		current = current->next;
// 	}
// 	return (0);
// }

/*
lst : pointer to a pointer of the first node of the lise

new : pointer to the node to be added to the list

declare a temporary pointer 'last' of the same type as
	the nodes in the list
will be used to traverse the list and locate the last node

check if pointer to the new node is null
	if so, returns without doing anything
		(no node to add)

check if pointer to first node of the list is null
	(means list is empty)
		and the new node will be the first node in the list
('*lst' is set to 'new')
	then function returns

call 'ft_lstlast' to get the last node in the list
	(returns a pointer to last node of the list)

set 'next' pointer of the last node in the list
	to point to the end of the list
*/