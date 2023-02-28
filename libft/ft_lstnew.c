/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdumais <cdumais@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/21 13:00:31 by cdumais           #+#    #+#             */
/*   Updated: 2023/02/27 17:11:54 by cdumais          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*new;

	new = (t_list *)malloc(sizeof(*new));
	if (!new)
		return (NULL);
	new->content = content;
	new->next = NULL;
	return (new);
}

// int	main(void)
// {
// 	char	*text;
// 	t_list	*list;

// 	text = "Hello there !";
// 	list = ft_lstnew(text);
// 	if (list)
// 	{
// 		printf("\nContent of the 'list' node : %s\n", (char *)list->content);
// 		printf("\nNext node pointer : %p\n", (void*)list->next);
// 	}
// 	else
// 	{
// 		printf("\nFailed to create a new list node.\n");
// 	}
// 	return (0);
// }

/*
initialize a new linked list node
useful to create a linked list

linked list node : structure that contains two elements;

content : a pointer to some data

next	: a pointer to the next node

content in function argument is a pointer to the data that
	will be stored in the new linked list node

malloc for new liked list node structure of type "t_list"

if memory allocation fails, return NULL

set 'content' member of the new linked list node
	to the data pointed to by 'content'

set the 'next' member to NULL
	to indicate that this is the end of the list

returns a pointer to the new linked list node
*/