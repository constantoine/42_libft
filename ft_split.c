/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crebert <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/13 14:53:50 by crebert           #+#    #+#             */
/*   Updated: 2019/11/07 19:25:17 by crebert          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <unistd.h>
#include "libft.h"
#include <stdio.h>

static size_t	ft_strlen_local(char const *str, char c)
{
	size_t	size;

	size = 0;
	while (str[size] && str[size] != c)
		size++;
	return (size + 1);
}

static char		*ft_strdup_local(char const *s, char c)
{
	char	*str;
	size_t	len;
	size_t	index;

	len = ft_strlen_local(s, c);
	if (!(str = malloc(sizeof(char) * len)))
		return (NULL);
	index = 0;
	while (s[index] && s[index] != c)
	{
		str[index] = s[index];
		index++;
	}
	str[index] = 0;
	return (str);
}

static char		**ft_split_local(char const *s, char c, int count, char **ptr)
{
	size_t	i;
	size_t	index_ptr;

	i = 0;
	index_ptr = 0;
	while (s[i])
	{
		if (s[i] != c)
		{
			if (!(ptr[index_ptr++] = ft_strdup_local(&s[i], c)))
			{
				index_ptr--;
				while (--index_ptr)
					free(ptr[index_ptr]);
				return (NULL);
			}
			i += ft_strlen_local(&s[i], c) - 2;
		}
		i++;
	}
	ptr[count] = 0;
	return (ptr);
}

char			**ft_split(char const *s, char c)
{
	char	**ptr;
	size_t	i;
	int		count;

	if (!s)
		return (NULL);
	count = 1;
	i = 0;
	if (s[0] == c || !s[0])
		count = 0;
	while (s[++i])
		if (s[i - 1] == c && s[i] != c)
			count++;
	if (!(ptr = malloc(sizeof(char*) * (count + 1))))
		return (NULL);
	ptr[count] = 0;
	if (!(ptr = ft_split_local(s, c, count, ptr)))
		free(ptr);
	return (ptr);
}
