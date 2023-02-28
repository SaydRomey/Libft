/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdumais <cdumais@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/21 16:41:19 by cdumais           #+#    #+#             */
/*   Updated: 2023/02/27 17:59:14 by cdumais          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new_list;
	t_list	*element;
	void	*content;

	if (!lst || !f)
		return (NULL);
	new_list = NULL;
	while (lst)
	{
		content = f(lst->content);
		element = ft_lstnew(content);
		if (!element)
		{
			ft_lstclear(&new_list, del);
			free(content);
			return (NULL);
		}
		ft_lstadd_back(&new_list, element);
		lst = lst->next;
	}
	return (new_list);
}

// #include "ft_lstadd_back.c"
// #include "ft_lstclear.c"
// #include "ft_lstnew.c"
// #include "ft_lstlast.c"

// void	*add_one(void *num)
// {
// 	int	*new_num;

// 	new_num = malloc(sizeof(int));
// 	if (!new_num)
// 		return (NULL);
// 	*new_num = (*(int *)num) + 1;
// 	return (new_num);
// }

// void	free_num(void *n)
// {
// 	free(n);
// }

// int	main(void)
// {
// 	t_list	*lst;
// 	t_list	*lst2;
// 	t_list 	*new_lst;
// 	t_list	*curr;
// 	int		node_count;

// 	lst = ft_lstnew(malloc(sizeof(int)));
// 	*(int *)lst->content = 41;
// 	lst2 = ft_lstnew(malloc(sizeof(int)));
// 	*(int *)lst2->content = -1;
// 	lst->next = lst2;
// 	lst2->next = NULL;

// 	curr = lst;
// 	if (!curr)
// 	{
// 		printf("\nft_lstmap returned NULL\n");
// 		return (1);
// 	}
// 	printf("\nCurrent list values\n\n");
// 	node_count = 1;
// 	while (curr)
// 	{
// 		printf("Node %d : %d\n", node_count, *(int *)curr->content);
// 		curr = curr->next;
// 		node_count++;
// 	}
// 	new_lst = ft_lstmap(lst, add_one, free_num);
// 	printf("\nList values + 1\n\n");
// 	node_count = 1;
// 	curr = new_lst;
// 	while (curr)
// 	{
// 		printf("Node %d : %d\n", node_count, *(int *)curr->content);
// 		curr = curr->next;
// 		node_count++;
// 	}
// 	curr = lst;
// 	printf("\nOriginal list values\n\n");
// 	node_count = 1;
// 	while (curr)
// 	{
// 		printf("Node %d : %d\n", node_count, *(int *)curr->content);
// 		curr = curr->next;
// 		node_count++;
// 	}
// 	ft_lstclear(&new_lst, free_num);
// 	ft_lstclear(&lst, free_num);
// 	return (0);
// }

/*
lst : pointer to first node of linked list

f : pointer to a function that takes a void * argument
	(a pointer to a generic data type)

del : pointer to a function that takes a void * argument
	and frees the memory associated with it

check if 'lst' or 'f' is NULL
	if so, return NULL.

initialize a new linked list to NULL
	(to store transformed content)

while loop that iterates over each node in 'lst'
	calls for each node the function 'f' with 
		(lst->content) as argument
this returns a pointer to the transformed content

creates a new node 'element' with the transformed content
	(with ft_lstnew)

if new node can't be created, 
	frees the memory associated with nodes in 'new_list'
		(if any) and returns NULL

if node creation is successful, adds it to the end of 'new_list'
	using 'ft_lstadd_back'
		then advances 'lst' to the next node

when all nodes in 'lst' are processed, returns a pointer tp
	the first node of 'new_list' (with transformed by 'f' content)
		original list 'lst' is left unchanged
*/