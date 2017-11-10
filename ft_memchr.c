/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gnegri <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/09 18:30:02 by gnegri            #+#    #+#             */
/*   Updated: 2017/11/09 18:30:03 by gnegri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*ptr;
	unsigned char	c2;

	if (!s)
		return (NULL);
	ptr = (unsigned char *)s;
	c2 = (unsigned char)c;
	i = 0;
	while (ptr[i] != c2 && i < (n - 1))
		i++;
	if (ptr[i] == c2 && n != 0)
		return (ptr + i);
	return (NULL);
}
