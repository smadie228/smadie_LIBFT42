/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smadie <smadie@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/18 15:34:44 by smadie            #+#    #+#             */
/*   Updated: 2021/10/18 18:28:27 by smadie           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	unsigned int	i;
	unsigned int	s_len;
	char			*arr;

	if (!s)
		return (NULL);
	s_len = ft_strlen(s);
	if (s_len <= start)
	{
		len = 0;
	}
	if (ft_strlen(s) - start < len)
		len = ft_strlen(s) - start;
	arr = (char *)malloc(len + 1);
	if (arr == NULL)
		return (NULL);
	i = -1;
	while (++i < len && s[start + i])
		arr[i] = s[start + i];
	arr[i] = '\0';
	return (arr);
}
