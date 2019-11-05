/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crebert <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/04 20:25:21 by crebert           #+#    #+#             */
/*   Updated: 2019/11/04 20:35:58 by crebert          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*elem;
	t_list	*tmp;

	if (lst == NULL)
		return ;
	tmp = *lst;
	if (tmp == NULL)
		return ;
	elem = tmp;
	while (elem)
	{
		(*del)(elem->content);
		tmp = elem->next;
		free(elem);
		elem = tmp;
	}
	*lst = NULL;
}
