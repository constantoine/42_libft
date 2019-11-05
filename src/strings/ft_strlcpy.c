/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crebert <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/05 20:08:55 by crebert           #+#    #+#             */
/*   Updated: 2019/11/05 20:19:18 by crebert          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	index;
	size_t	src_len;

	if (!src)
		return (0);
	src_len = ft_strlen(src);
	index = 0;
	while (*src && index < dstsize - 1)
		dst[index++] = *src++;
	if (dstsize)
		dst[index] = 0;
	return (src_len);
}
