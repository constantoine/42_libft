/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crebert <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/04 20:43:48 by crebert           #+#    #+#             */
/*   Updated: 2019/11/05 12:26:41 by crebert          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*elem;
	t_list	*prev;
	t_list	*start;

	if (!lst)
		return (NULL);
	start = NULL;
	prev = NULL;
	while (lst)
	{
		if (!(elem = ft_lstnew((*f)(lst->content))))
			return (NULL);
		if (!start)
			start = elem;
		if (prev)
			prev->next = elem;
		prev = elem;
		elem = elem->next;
		(*del)(lst->content);
		lst = lst->next;
	}
	return (start);
}
