/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crebert <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/04 16:12:08 by crebert           #+#    #+#             */
/*   Updated: 2019/11/04 18:51:11 by crebert          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t		index;
	char		*destination;
	const char	*source;

	if (!dst && !src)
		return (dst);
	index = 0;
	destination = (char*)dst;
	source = (const char *)src;
	while (index < n)
	{
		destination[index] = source[index];
		index++;
	}
	return (dst);
}
