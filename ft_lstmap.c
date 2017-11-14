/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gnegri <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/13 14:31:14 by gnegri            #+#    #+#             */
/*   Updated: 2017/11/13 14:31:17 by gnegri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	while (lst)
	{
		(*f)(lst);
		lst = (t_list *)malloc(sizeof(lst));
		if (lst == NULL)
			return (0);
		lst = lst->next;
	}
	return (lst);
}
