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
	int		k;
	int		end;
	int		len;
	char	*str;

	i = 0;
	j = 0;
	k = 0;
	len = 0;
	if (!s)
		return (0);
	while (s[i] != '\0')
		i++;
	end = i - 1;
	while (s[j] == ' ' || s[j] == '\n' || s[j] == '\t')
		j++;
	while (s[end] == ' ' || s[end] == '\n' || s[end] == '\t')
		end--;
	len = end - j;
	str = (char *)malloc(sizeof(char) * (len + 1));
	while (s[j] != end)
	{
		str[k] = s[j];
		j++;
		k++;
	}
	if (k == 0)
		str[k + 1] = '\0';
	else
		str[k] = '\0';
	return (str);
}
