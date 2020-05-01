/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cleo <cleo@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/04 15:05:10 by crebert           #+#    #+#             */
/*   Updated: 2020/05/01 21:53:07 by cleo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	int		sign;
	int		result;

	while ((sign = 1) && ft_isspace(*str))
		str++ && (result = 0);
	if (*str == '+' || (*str == '-' && (sign = -1)))
		str++;
	while (ft_isdigit(*str))
		result = result * 10 + (*str++ - '0') * sign;
	return (result);
}
