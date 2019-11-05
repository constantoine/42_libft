/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crebert <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/05 19:34:18 by crebert           #+#    #+#             */
/*   Updated: 2019/11/05 19:40:20 by crebert          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	index;
	char	*str;

	index = 0;
	if (!s1 && !s2)
		return (NULL);
	if (!s1)
		return (ft_strdup(s2));
	if (!s2)
		return (ft_strdup(s1));
	if (!(str = malloc(sizeof(char) * (1 + ft_strlen(s1) + ft_strlen(s2)))))
		return (NULL);
	while (*s1)
		str[index++] = *s1++;
	while (*s2)
		str[index++] = *s2++;
	str[index] = 0;
	return (str);
}
