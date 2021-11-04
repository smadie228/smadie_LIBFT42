/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smadie <smadie@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/13 19:58:01 by smadie            #+#    #+#             */
/*   Updated: 2021/10/15 13:24:44 by smadie           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	const char	*spr;
	char		*kol;
	size_t		i;

	i = 0;
	spr = (char *)src;
	kol = (char *)dst;
	if (!dst && !src)
		return (NULL);
	if (spr > kol)
	{
		while (len > i)
		{
			kol[i] = spr[i];
			i++;
		}
	}
	else
	{
		while (len-- > i)
		{
			kol[len] = spr[len];
		}
	}
	return (dst);
}
