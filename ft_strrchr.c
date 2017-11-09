/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gnegri <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/09 09:43:53 by gnegri            #+#    #+#             */
/*   Updated: 2017/11/09 09:43:55 by gnegri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

char	*ft_strrchr(const char *s, int c)
{
	int i;
	int nb1;
	int nb2;

	i = 0;
	nb1 = 0;
	nb2 = 0;
	while (s[i] != '\0')
	{
		if (s[i] == c)
			nb1++;
		i++;
	}
	if (nb1 == 0 && s[i + 1] != c)
		return (0);
	else
		i = 0;
		while (s[i] != '\0' && nb2 != nb1)
		{
			if (s[i] == c)
			{
				nb2++;
			}
			i++;
		}
		i--;
		return ((char *)&s[i]);
}
