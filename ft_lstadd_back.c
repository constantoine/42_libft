/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crebert <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/04 18:52:14 by crebert           #+#    #+#             */
/*   Updated: 2019/11/04 20:10:28 by crebert          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **alst, t_list *new)
{
	t_list	*elem;
	t_list	*tmp;

	if (alst == NULL)
	{
		alst = &new;
		return ;
	}
	tmp = *alst;
	if (tmp == NULL)
	{
		*alst = new;
		return ;
	}
	elem = ft_lstlast(*alst);
	if (elem)
		elem->next = new;
}
