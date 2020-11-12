/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cleo <cleo@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/05 18:35:44 by crebert           #+#    #+#             */
/*   Updated: 2020/05/17 13:53:06 by cleo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <limits.h>
#include "libft.h"

char	*ft_itoa(int nb)
{
	int		index;
	int		nbcpy;
	char	num[50];

	nbcpy = nb;
	index = 48;
	num[49] = 0;
	num[index] = '0';
	if (nb == INT_MIN && (num[index--] = '0' + ((unsigned)INT_MIN) % 10))
		nb /= 10;
	if (nb < 0)
		nb *= -1;
	while (nb > 0 && (num[index--] = nb % 10 + '0'))
		nb /= 10;
	if (nbcpy < 0)
		num[index] = '-';
	else if (nbcpy != 0)
		index++;
	return (ft_strdup(&num[index]));
}
