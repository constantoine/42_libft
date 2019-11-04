/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crebert <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/04 16:20:52 by crebert           #+#    #+#             */
/*   Updated: 2019/11/04 17:10:40 by crebert          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	const char	*source;
	char		*destination;

	source = (const char *)src;
	destination = (char *)dst;
	if (destination < source)
		while (len--)
			*destination++ = *source++;
	else
		while (len--)
			*(destination + len) = *(source + len);
	return (dst);
}
