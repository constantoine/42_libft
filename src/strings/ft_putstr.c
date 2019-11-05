/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crebert <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/04 17:17:02 by crebert           #+#    #+#             */
/*   Updated: 2019/11/05 15:42:44 by crebert          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>
#include "libft.h"

int	ft_putstr(const char *str)
{
	if (str)
		return (write(1, str, ft_strlen(str)) < 0 ? EOF : 1);
	return (EOF);
}
