/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crebert <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/04 20:43:48 by crebert           #+#    #+#             */
/*   Updated: 2019/11/04 21:45:32 by crebert          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

t_list *ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
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

void	display(void* data)
{
	ft_putstr((char*)data);
	ft_putstr("\n");
}

void	*repl(void* data)
{
	char	*dat;

	dat = ft_strdup((char *)data);
	*dat += 3;
	return ((void *)dat);
}

int	main()
{
	t_list *start;
	t_list *res;

	start = ft_lstnew(ft_strdup("1-1"));
	start->next = ft_lstnew(ft_strdup("2-2"));
	start->next->next = ft_lstnew(ft_strdup("3-3"));

	res = ft_lstmap(start, repl, display);
	ft_lstiter(res, display);
}

