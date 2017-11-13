/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gnegri <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/10 14:36:59 by gnegri            #+#    #+#             */
/*   Updated: 2017/11/10 14:37:01 by gnegri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int		ft_count(char const *s, char c)
{
	int i;
	int j;

	i = 0;
	j = 0;
	while (s[i] != '\0')
	{
		if (s[i] != c)
			j++;
		while (s[i] != c)
			i++;
		i++;
	}
	return (j);
}

static char		**ft_create_lines(char **tab, char const *s, char c)
{
	int i;
	int j;
	int k;

	i = 0;
	k = 0;
	while (s[i] != '\0')
	{
		j = 0;
		while (s[i] != c)
		{
			i++;
			j++;
			if (s[i] == c || s[i] == '\0')
			{
				tab[k] = (char *)malloc(sizeof(char) * j + 1);
				if (tab[k] == NULL)
					return (0);
				k++;
			}
		}
		i++;
	}
	return (tab);
}

static char		**ft_fill_tab(char **tab, char const *s, char c)
{
	int i;
	int j;
	int k;

	i = 0;
	k = 0;
	while (s[i] != '\0')
	{
		j = 0;
		while (s[i] != c)
		{
			tab[k][j++] = s[i++];
			if (s[i] == c || s[i] == '\0')
			{
				tab[k][j] = '\0';
				k++;
			}
		}
		i++;
	}
	tab[k++] = 0;
	return (tab);
}

char			**ft_strsplit(char const *s, char c)
{
	int		nb_words;
	int		i;
	char	**tab;

	i = 0;
	tab = NULL;
	if (s == 0)
		return (0);
	nb_words = ft_count(s, c);
	tab = (char **)malloc(sizeof(char *) * nb_words + 1);
	if (tab == NULL)
		return (0);
	tab = ft_create_lines(tab, s, c);
	tab = ft_fill_tab(tab, s, c);
	return (tab);
}
