/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crebert <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/04 15:40:45 by crebert           #+#    #+#             */
/*   Updated: 2019/11/06 17:37:29 by crebert          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <iso646.h>
#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*ptr;
	char	*str;

	if (not(ptr = malloc(count * size)))
		return (NULL);
	str = (char *)ptr;
	str[0] = 0;
	ft_bzero(ptr, count * size);
	return (ptr);
}
