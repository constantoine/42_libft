/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crebert <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/04 15:05:10 by crebert           #+#    #+#             */
/*   Updated: 2019/11/04 20:04:30 by crebert          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	size_t	index;
	int		sign;
	int		result;

	sign = 1;
	result = 0;
	index = 0;
	while (ft_isspace(str[index]))
		index++;
	if (str[index])
	{
		if (str[index] == '-')
			sign = -1;
		if (str[index] == '-' || str[index] == '+')
			index++;
	}
	while (ft_isdigit(str[index]))
	{
		result *= 10;
		result += (str[index++] - '0') * sign;
	}
	return (result);
}
