/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crebert <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/05 18:43:46 by crebert           #+#    #+#             */
/*   Updated: 2019/11/05 19:24:48 by crebert          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

static	int		is_in_set(const char *set, const char c)
{
	while (*set)
	{
		if (*set == c)
			return (1);
		set++;
	}
	return (0);
}

static	char	*ft_strndup_local(char const *str, size_t len)
{
	char	*ptr;
	size_t	index;

	index = 0;
	if (!(ptr = malloc(sizeof(char) * (len + 1))))
		return (NULL);
	while (str[index] && index < len)
	{
		ptr[index] = str[index];
		index++;
	}
	ptr[index] = 0;
	return (ptr);
}

char			*ft_strtrim(char const *s1, char const *set)
{
	size_t	len;

	if (!s1)
		return (NULL);
	while (is_in_set(set, *s1))
		s1++;
	len = ft_strlen(s1);
	while (len && is_in_set(set, s1[len - 1]))
		len--;
	return (ft_strndup_local(s1, len));
}
