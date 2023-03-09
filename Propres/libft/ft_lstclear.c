/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdumais <cdumais@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/21 16:24:16 by cdumais           #+#    #+#             */
/*   Updated: 2023/03/06 15:17:34 by cdumais          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*next;
	t_list	*current;

	current = *lst;
	while (current)
	{
		del(current->content);
		next = current->next;
		free(current);
		current = next;
	}
	*lst = NULL;
}

/*
void	ft_del(void *content)
{
	free(content);
}

#include "ft_lstnew.c"
#include "ft_lstadd_back.c"
#include "ft_lstlast.c"

int	main(void)
{
	t_list	*list;

	list = ft_lstnew("Node 1");
	ft_lstadd_back(&list, ft_lstnew("Node 2"));
	ft_lstadd_back(&list, ft_lstnew("Node 3"));
	printf("\n--Before clearing--\n\n");
	while(list)
	{
		printf("%s\n", (char *)list->content);
		list = list->next;
	}
	ft_lstclear(&list, &ft_del);
	printf("\n--After clearing--\n");
	while (list)
	{
		printf("%s\n", (char *)list->content);
		list = list->next;
	}
	return (0);
}
*/