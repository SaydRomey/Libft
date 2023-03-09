/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdumais <cdumais@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/21 13:35:16 by cdumais           #+#    #+#             */
/*   Updated: 2023/03/06 15:19:10 by cdumais          ###   ########.fr       */
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

/*
int	main(void)
{
	t_list	*head;
	t_list	*second;
	t_list	*third;

	head = malloc(sizeof(t_list));
	second = malloc(sizeof(t_list));
	third = malloc(sizeof(t_list));
	head->content = "Node 1";
	head->next = second;
	second->content = "Node 2";
	second->next = third;
	third->content = "Node 3";
	third->next = NULL;
	t_list *last_node = ft_lstlast(head);
	printf("\nContent of the last node : %s\n", (char*)last_node->content);
	free(head);
	free(second);
	free(third);
	return (0);
}
*/