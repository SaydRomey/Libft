/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdumais <cdumais@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/21 13:19:22 by cdumais           #+#    #+#             */
/*   Updated: 2023/02/26 19:39:04 by cdumais          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	unsigned int	i;
	t_list			*lst_temp;

	i = 0;
	lst_temp = lst;
	while (lst_temp)
	{
		lst_temp = lst_temp->next;
		i++;
	}
	return (i);
}

// int	main(void)
// {
// 	t_list	*head;
// 	t_list	*second;
// 	t_list	*third;
// 	int		size;

// 	head = (t_list*)malloc(sizeof(t_list));
// 	second = (t_list*)malloc(sizeof(t_list));
// 	third = (t_list*)malloc(sizeof(t_list));
// 	head->content = "Node 1";
// 	head->next = second;
// 	second->content = "Node 2";
// 	second->next = third;
// 	third->content = "Node 3";
// 	third->next = NULL;
// 	size = ft_lstsize(head);
// 	printf("\nThe size of the linked list is : %d\n", size);
// 	free(head);
// 	free(second);
// 	free(third);
// 	return (0);
// }

/*
lst	: beginning of the list

i	: counter to track number of elements in the list

count number of nodes in a list

loop to traverse linked list
	starting with 'lst'. For each iteration, 
		moves to the next element in the list (lst_temp->next)

loop continues until 'lst_temp' is = to NULL
	(indicates end of the list)

'i' keeps track of number of elements in the list and
	is incremented at each iteration of the loop

returns 'i' as the size of the linked list
*/