/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smadie <smadie@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/19 23:17:34 by smadie            #+#    #+#             */
/*   Updated: 2021/10/19 23:20:33 by smadie           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*temp;
	t_list	*l;

	if (!lst || !del)
		return ;
	temp = *lst;
	while (temp)
	{
		l = temp->next;
		del(temp->content);
		free(temp);
		temp = l;
	}
	*lst = temp;
}
