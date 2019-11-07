/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crebert <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/05 16:34:20 by crebert           #+#    #+#             */
/*   Updated: 2019/11/05 16:48:45 by crebert          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t				index;
	const unsigned char	*a;
	const unsigned char *b;

	index = 0;
	a = (const unsigned char *)s1;
	b = (const unsigned char *)s2;
	while (index < n)
	{
		if (a[index] != b[index])
			return (a[index] - b[index]);
		index++;
	}
	return (0);
}
