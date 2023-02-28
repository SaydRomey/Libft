/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdumais <cdumais@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/21 13:35:16 by cdumais           #+#    #+#             */
/*   Updated: 2023/02/27 12:59:17 by cdumais          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	t_list	*current_node;

	current_node = lst;
	if (current_node)
	{
		while (current_node->next)
		{
			current_node = current_node->next;
		}
	}
	return (current_node);
}

// int	main(void)
// {
// 	t_list	*head;
// 	t_list	*second;
// 	t_list	*third;

// 	head = malloc(sizeof(t_list));
// 	second = malloc(sizeof(t_list));
// 	third = malloc(sizeof(t_list));
// 	head->content = "Node 1";
// 	head->next = second;
// 	second->content = "Node 2";
// 	second->next = third;
// 	third->content = "Node 3";
// 	third->next = NULL;
// 	t_list *last_node = ft_lstlast(head);
// 	printf("\nContent of the last node : %s\n", (char*)last_node->content);
// 	free(head);
// 	free(second);
// 	free(third);
// 	return (0);
// }

/*
traverse linked list until las node is found

lst : beginnig of the list

check if 'current_node' is not a null pointer

if not, enters a while loop wich continues
	until 'current_node->next' is a null pointer

for each iteration, 'current_node' is updated
	to point to the next element in the list

returns 'current_node' : pointer to the last node / element of the list
*/