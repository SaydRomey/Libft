/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdumais <cdumais@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/21 13:19:22 by cdumais           #+#    #+#             */
/*   Updated: 2023/03/06 15:20:23 by cdumais          ###   ########.fr       */
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

/*
int	main(void)
{
	t_list	*head;
	t_list	*second;
	t_list	*third;
	int		size;

	head = (t_list*)malloc(sizeof(t_list));
	second = (t_list*)malloc(sizeof(t_list));
	third = (t_list*)malloc(sizeof(t_list));
	head->content = "Node 1";
	head->next = second;
	second->content = "Node 2";
	second->next = third;
	third->content = "Node 3";
	third->next = NULL;
	size = ft_lstsize(head);
	printf("\nThe size of the linked list is : %d\n", size);
	free(head);
	free(second);
	free(third);
	return (0);
}
*/