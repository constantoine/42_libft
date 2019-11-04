/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crebert <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/04 14:35:09 by crebert           #+#    #+#             */
/*   Updated: 2019/11/04 14:59:38 by crebert          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	size_t			index;
	unsigned char	value;
	unsigned char	*ptr;

	index = 0;
	value = (unsigned char)c;
	ptr = (unsigned char*)b;
	while (index < len)
		ptr[index++] = value;
	return (b);
}
