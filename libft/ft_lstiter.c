/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdumais <cdumais@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/21 16:28:40 by cdumais           #+#    #+#             */
/*   Updated: 2023/02/27 17:16:56 by cdumais          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	t_list	*lst_temp;

	lst_temp = lst;
	while (lst_temp)
	{
		f(lst_temp->content);
		lst_temp = lst_temp->next;
	}
}

// void	print_content(void *content)
// {
// 	printf("%s\n", (char *)content);
// }

// void	print_content_reverse(void *content)
// {
// 	char	*str;
// 	int		i;

// 	str = (char *)content;
// 	i = ft_strlen(str) - 1;
// 	while (i >= 0)
// 	{
// 		putchar(str[i]);
// 		i--;
// 	}
// 	putchar ('\n');
// }

// #include "ft_lstnew.c"
// #include "ft_strlen.c"

// int	main(void)
// {
// 	t_list	*list;
// 	t_list	*node1;
// 	t_list	*node2;
// 	t_list	*node3;

// 	node1 = ft_lstnew("node 1");
// 	node2 = ft_lstnew("node 2");
// 	node3 = ft_lstnew("node 3");
// 	node1->next = node2;
// 	node2->next = node3;
// 	list = node1;
// 	printf("\nPrint with ft_lstiter\n\n");
// 	ft_lstiter(node1, &print_content);
// 	printf("\n\nReverse with ft_lstiter\n\n");
// 	ft_lstiter(node1, &print_content_reverse);
// 	printf("\n\nOriginal list is unchanged:\n\n");
// 	ft_lstiter(node1, &print_content);
// 	return (0);
// }

/*
used to apply a function to each node in a linked list

lst : pointer to the first node

f   : pointer to a function to be applied

set 'lst_temp' to point to first node in list

loop through list and apply 'f' function to 
	each node's content

allows performing a specific operation to each
	node of a list
(such as printing or updating its values)
*/