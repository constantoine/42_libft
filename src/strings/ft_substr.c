/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crebert <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/05 20:20:49 by crebert           #+#    #+#             */
/*   Updated: 2019/11/05 20:26:49 by crebert          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	index;
	char	*ptr;

	index = 0;
	if (!s)
		return (NULL);
	if (ft_strlen(s) < start)
		return (NULL);
	if (!(ptr = malloc(len + 1)))
		return (NULL);
	while (s[start] && index < len)
		ptr[index++] = s[start++];
	ptr[index] = 0;
	return (ptr);
}
