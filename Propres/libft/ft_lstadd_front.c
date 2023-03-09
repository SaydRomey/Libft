/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdumais <cdumais@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/21 13:10:57 by cdumais           #+#    #+#             */
/*   Updated: 2023/03/06 19:59:28 by cdumais          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	if (lst && new)
	{
		new ->next = *lst;
		*lst = new;
	}
	else if (!*lst)
		*lst = new;
}

/*
#include "ft_lstnew.c"

int	main(void)
{
	char	*content1;
	char	*content2;
	char	*new_content;
	t_list	*list1;
	t_list	*list2;
	t_list	*new_node;
	t_list	*current;

	content1 = "Hello there !";
	list1 = ft_lstnew(content1);
	content2 = "This is a test.";
	list2 = ft_lstnew(content2);
	list1->next = list2;
	new_content = "New node added to the front.";
	new_node = ft_lstnew(new_content);
	ft_lstadd_front(&list1, new_node);
	current = list1;
	while (current)
	{
		printf("\nContent of the 'list' node : %s\n", (char *)current->content);
		printf("\nNext node pointer : %p\n", (void*)current->next);
		current = current->next;	
	}
	return (0);
}
*/