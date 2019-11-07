/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crebert <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/05 20:29:37 by crebert           #+#    #+#             */
/*   Updated: 2019/11/05 20:39:47 by crebert          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*ptr;
	size_t	index;

	index = 0;
	if (!s)
		return (NULL);
	if (!(ptr = malloc(ft_strlen(s) + 1)))
		return (NULL);
	while (*s)
		ptr[index++] = *s++;
	ptr[index] = 0;
	index = 0;
	while (ptr[index])
	{
		ptr[index] = (*f)(index, ptr[index]);
		index++;
	}
	ptr[index] = 0;
	return (ptr);
}
