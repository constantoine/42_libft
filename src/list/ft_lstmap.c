/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crebert <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/04 20:43:48 by crebert           #+#    #+#             */
/*   Updated: 2019/11/06 17:43:35 by crebert          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
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
