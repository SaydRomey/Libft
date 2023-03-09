/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdumais <cdumais@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/21 16:13:15 by cdumais           #+#    #+#             */
/*   Updated: 2023/03/06 15:17:54 by cdumais          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdelone(t_list *lst, void (*del)(void *))
{
	if (del != NULL)
		del(lst->content);
	free(lst);
}

/*
void	ft_del(void *content)
{
	free(content);
}

int	main(void)
{
	t_list	*head;
	t_list	*current;

	head = malloc(sizeof(t_list));
	head->content = (int*)malloc(sizeof(int));
	*(int *)head->content = 42;
	head->next = NULL;
	printf("\nThe linked list before ft_lstdelone: ");
	current = head;
	while (current)
	{
		printf("%d\n", *(int*)current->content);
		current = current->next;
	}
	ft_lstdelone(head, ft_del);
	printf("\nThe linked list after ft_lstdelone: ");
	current = head;
	while (current)
	{
		printf("%d\n", *(int*)current->content);
		current = current->next;		
	}
	return (0);
}
*/