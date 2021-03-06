/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gnegri <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/09 16:26:00 by gnegri            #+#    #+#             */
/*   Updated: 2017/11/09 16:26:02 by gnegri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	unsigned int i;

	i = 0;
	if (n == 0)
		return ;
	while (i < n)
	{
		((char *)s)[i] = '\0';
		i++;
	}
}
