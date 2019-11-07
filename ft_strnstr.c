/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crebert <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/05 17:31:45 by crebert           #+#    #+#             */
/*   Updated: 2019/11/05 18:06:23 by crebert          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *str, const char *to_find, size_t len)
{
	int		index;
	int		inner_index;
	int		start_index;

	if (to_find[0] == 0)
		return ((char *)str);
	index = -1;
	start_index = -1;
	while (str[++index] && index < (int)len)
	{
		if (str[index] == to_find[0])
		{
			start_index = index;
			inner_index = -1;
			while (str[++inner_index + start_index] && start_index +
					inner_index < (int)len)
			{
				if (to_find[inner_index] != str[start_index + inner_index])
					break ;
				if (to_find[inner_index + 1] == 0)
					return ((char *)&str[start_index]);
			}
		}
	}
	return (NULL);
}
