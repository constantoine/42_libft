/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crebert <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/05 16:09:36 by crebert           #+#    #+#             */
/*   Updated: 2019/11/05 16:45:58 by crebert          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	unsigned char		*destination;
	const unsigned char	*source;
	size_t				index;

	index = 0;
	destination = (unsigned char *)dst;
	source = (const unsigned char *)src;
	while (index < n)
	{
		destination[index] = source[index];
		if (source[index] == (unsigned char)c)
			return ((void *)&destination[index + 1]);
		index++;
	}
	return (NULL);
}
