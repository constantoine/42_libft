/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crebert <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/04 20:43:48 by crebert           #+#    #+#             */
/*   Updated: 2019/11/07 19:35:45 by crebert          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

static	t_list	*ft_lstclear_local(t_list **start, void (*del)(void *))
{
	ft_lstclear(start, (*del));
	return (NULL);
}

t_list			*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*elem;
	t_list	*prev;
	t_list	*start;
	void	*con;

	if (!lst)
		return (NULL);
	start = NULL;
	prev = NULL;
	while (lst)
	{
		con = (*f)(lst->content);
		if (!(elem = ft_lstnew(con)))
			return (ft_lstclear_local(&start, (*del)));
		if (!start)
			start = elem;
		if (prev)
			prev->next = elem;
		prev = elem;
		elem = elem->next;
		if (!con)
			(*del)(lst->content);
		lst = lst->next;
	}
	return (start);
}
