/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crebert <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/05 15:52:18 by crebert           #+#    #+#             */
/*   Updated: 2019/11/05 15:52:58 by crebert          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <limits.h>

void	ft_putnbr_fd(int nb, int fd)
{
	int		index;
	int		nbcpy;
	char	num[11];

	nbcpy = nb;
	index = 10;
	num[10] = '0';
	if (nb == -2147483648)
	{
		num[index--] = '8';
		nb /= 10;
	}
	if (nb < 0)
		nb *= -1;
	while (nb > 0)
	{
		num[index] = nb % 10 + '0';
		nb /= 10;
		index--;
	}
	if (nbcpy < 0)
		num[index] = '-';
	else if (nbcpy != 0)
		index++;
	write(fd, &num[index], 11 - index);
}
