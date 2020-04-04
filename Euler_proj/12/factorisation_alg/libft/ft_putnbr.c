/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbright <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/02 10:00:33 by gbright           #+#    #+#             */
/*   Updated: 2020/03/15 19:17:12 by cvirgil          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr(int nb)
{
	char	str[10];
	int		i;

	i = 10;
	if (nb < 0)
	{
		ft_putchar_fd(1, '-');
		if (nb == ((-1) * 2147483648))
		{
			str[--i] = '8';
			nb = nb / 10;
		}
		nb = (-1) * (nb);
	}
	if (nb == 0)
		ft_putchar_fd(1, '0');
	while (nb != 0)
	{
		str[--i] = '0' + (nb % 10);
		nb = nb / 10;
	}
	while (i < 10)
	{
		ft_putchar_fd(1, str[i++]);
	}
}