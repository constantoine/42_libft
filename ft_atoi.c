/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cleo <cleo@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/04 15:05:10 by crebert           #+#    #+#             */
/*   Updated: 2020/05/02 00:28:57 by cleo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(const char *str)
{
	int		sign;
	int		result;

	while ((sign = 1) && ((*str >= 9 && *str <= 13) || *str == 32))
		str++;
	if ((result &= ~0xFFFF) && *str == '+' || (*str == '-' && (sign = -1)))
		str++;
	while (*str >= '0' && *str <= '9')
		result = result * 10 + (*str++ - '0') * sign;
	return (result);
}
