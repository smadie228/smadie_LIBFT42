/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smadie <smadie@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/14 20:25:21 by smadie            #+#    #+#             */
/*   Updated: 2021/10/15 13:57:45 by smadie           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t			i;
	unsigned char	*s;
	unsigned char	*e;

	s = (unsigned char *) s1;
	e = (unsigned char *) s2;
	if (n == 0)
		return (0);
	i = 0;
	while (s[i] == e[i] && i < n - 1)
	{
		i++;
	}
	return (s[i] - e[i]);
}
