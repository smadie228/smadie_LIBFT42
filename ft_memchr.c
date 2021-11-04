/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smadie <smadie@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/15 13:29:08 by smadie            #+#    #+#             */
/*   Updated: 2021/10/15 13:33:04 by smadie           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	char	*p;
	int		i;

	i = 0;
	p = (char *)s;
	while (n > 0)
	{
		if (p[i] == (char)c)
			return (&p[i]);
		i++;
		n--;
	}
	if (c == '\0' && n > 0)
		return (&p[i]);
	return (NULL);
}
