/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crebert <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/04 16:00:01 by crebert           #+#    #+#             */
/*   Updated: 2019/11/04 16:06:19 by crebert          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

char	*ft_strdup(const char *s1)
{
	int		index;
	char	*ptr;

	if (!(ptr = malloc(sizeof(char) * (1 + ft_strlen(s1)))))
		return (NULL);
	index = -1;
	while (s1[++index])
		ptr[index] = s1[index];
	ptr[index] = 0;
	return (ptr);
}
