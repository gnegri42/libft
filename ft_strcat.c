/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gnegri <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/09 14:50:32 by gnegri            #+#    #+#             */
/*   Updated: 2017/11/09 14:50:34 by gnegri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strcat(char *s1, const char *s2)
{
	int i;
	int pos;
	int l_src;

	i = 0;
	l_src = ft_strlen(src);
	pos = ft_strlen(dest);
	while (i < l_src)
	{
		dest[pos] = src[i];
		i++;
		pos++;
	}
	dest[pos + 1] = '\0';
	return (dest);
}
