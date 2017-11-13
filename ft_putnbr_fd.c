/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gnegri <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/10 15:28:45 by gnegri            #+#    #+#             */
/*   Updated: 2017/11/10 15:28:50 by gnegri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	ft_max_neg(void)
{
	ft_putstr("-2147483648");
}

void	ft_putnbr_fd(int n, int fd)
{
	char l;

	if (n == -2147483648)
	{
		ft_max_neg();
	}
	else
	{
		if (n < 0)
		{
			ft_putchar_fd('-', fd);
			n = n * -1;
		}
		if (n >= 10)
		{
			ft_putnbr_fd(n / 10, fd);
		}
		l = (n % 10) + '0';
		ft_putchar_fd(l, fd);
	}
}