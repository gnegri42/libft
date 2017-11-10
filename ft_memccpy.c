/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gnegri <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/09 17:42:42 by gnegri            #+#    #+#             */
/*   Updated: 2017/11/09 17:42:44 by gnegri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	size_t			i;
	//unsigned char	copy_c;

	i = 0;
	//copy_c = (char *)c;
	while(i < n)
	{
		((char *)dst)[i] = ((char *)src)[i];
		if (((char *)src)[i] == c)
			return (&dst[i]);
		i++;
	}
	return (0);
}
