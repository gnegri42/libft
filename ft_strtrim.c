/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gnegri <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/10 14:01:49 by gnegri            #+#    #+#             */
/*   Updated: 2017/11/10 14:01:50 by gnegri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s)
{
	int		i;
	int		j;
	char	*str;

	i = 0;
	j = 0;
	while (s[i] != '\0')
		i++;
	str = (char *)malloc(sizeof(char) * (i + 1));
	if (!str)
		return (0);
	i = 0;
	while (s[i] != '\0')
	{
		if (s[i] == ' ' || s[i] == '\n' || s[i] == '\t')
			i++;
		else
			str[j++] = s[i];
		i++;
	}
	if (j == 0)
		str[j + 1] = '\0';
	else
		str[j] = '\0';
	return (str);
}
