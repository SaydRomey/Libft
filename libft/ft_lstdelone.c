/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdumais <cdumais@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/21 16:13:15 by cdumais           #+#    #+#             */
/*   Updated: 2023/02/27 15:59:06 by cdumais          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdelone(t_list *lst, void (*del)(void *))
{
	if (del != NULL)
		del(lst->content);
	free(lst);
}

// void	ft_del(void *content)
// {
// 	free(content);
// }

// int	main(void)
// {
// 	t_list	*head;
// 	t_list	*current;

// 	head = malloc(sizeof(t_list));
// 	head->content = (int*)malloc(sizeof(int));
// 	*(int *)head->content = 42;
// 	head->next = NULL;
// 	printf("\nThe linked list before ft_lstdelone: ");
// 	current = head;
// 	while (current)
// 	{
// 		printf("%d\n", *(int*)current->content);
// 		current = current->next;
// 	}
// 	ft_lstdelone(head, ft_del);
// 	printf("\nThe linked list after ft_lstdelone: ");
// 	current = head;
// 	while (current)
// 	{
// 		printf("%d\n", *(int*)current->content);
// 		current = current->next;		
// 	}
// 	return (0);
// }

/*
used to delete a single node from a linked list

lst : pointer to the node to be deleted

del : pointer to a function used to free
	the allocated memory for the node's content

check if 'del' pointer is null
	if not null, calls the function pointed to by 'del'
		passing the node's content as an argument
	(this will free memory allocated for the content of the node)

free the memory allocated for the node itself with 'free'
	(this deletes the node from the linked list)
*/