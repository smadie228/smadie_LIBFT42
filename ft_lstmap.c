/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smadie <smadie@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/20 18:22:59 by smadie            #+#    #+#             */
/*   Updated: 2021/10/20 18:27:40 by smadie           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*elem;
	t_list	*temp;

	temp = (void *)0;
	while (lst)
	{
		elem = ft_lstnew(f(lst->content));
		if (elem == (void *)0)
		{
			ft_lstclear(&temp, del);
			return ((void *)0);
		}
		ft_lstadd_back(&temp, elem);
		lst = lst->next;
	}
	return (temp);
}
