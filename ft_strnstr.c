/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smadie <smadie@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/14 21:18:50 by smadie            #+#    #+#             */
/*   Updated: 2021/10/21 23:03:08 by smadie           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
//{
//	size_t	pos;
//	size_t	i;
//
//	if (!*needle)
//		return ((char *)haystack);
//	pos = 0;
//	while (haystack[pos] != '\0' && pos < len)
//	{
//		if (haystack[pos] == needle[0])
//		{
//			i = 1;
//			while (needle[i] != '\0' && haystack[pos + i] == needle[i]
//				&& pos + i < len)
//				++i;
//			if (needle[i] == '\0')
//				return ((char *) &haystack[pos]);
//		}
//		++pos;
//	}
//	return (0);
//}

char    *ft_strnstr(const char    *haystack, const char    *needle, size_t    len)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = ft_strlen(needle) - 1;
	if (needle[0] == '\0')
		return ((char *)haystack);
	while ((haystack[i] != '\0') && i + j < len) // ошибка была здесь так как ты делал (haystack[i + j] != '\0')
	{
		if (haystack[i + j] == needle[j])
		{
			while (haystack[i + j] == needle[j])
			{
				if (j == 0)
					return ((char *)haystack + i);
				j--;
			}
			j = ft_strlen(needle) - 1;
		}
		i++;
	}
	return (NULL);
}
