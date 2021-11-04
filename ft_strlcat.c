/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smadie <smadie@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/15 20:42:52 by smadie            #+#    #+#             */
/*   Updated: 2021/10/15 22:58:58 by smadie           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	k;
	size_t	j;

	j = ft_strlen(dst);
	i = 0;
	k = ft_strlen(dst) + ft_strlen(src);
	if (dstsize <= j)
		return (ft_strlen(src) + dstsize);
	while (*dst)
		dst++;
	while ((i < dstsize - (k - ft_strlen(src)) - 1) && src[i])
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return (k);
}
