/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smadie <smadie@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/13 18:05:05 by smadie            #+#    #+#             */
/*   Updated: 2021/10/15 12:43:23 by smadie           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	char	*array;
	size_t	i;

	i = 0;
	array = (char *)s;
	while (i < n)
	{
		array[i] = 0;
		i++;
	}
}
