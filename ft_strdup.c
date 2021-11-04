/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smadie <smadie@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/16 18:32:27 by smadie            #+#    #+#             */
/*   Updated: 2021/10/16 21:43:38 by smadie           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char    *ft_strdup(const char *s1)
{
    char    *strdup;
    size_t    i;

    strdup = (char *)malloc(sizeof(char) * (ft_strlen(s1) + 1));
    if (strdup)
    {
        i = 0;
        while (s1[i])
        {
            strdup[i] = s1[i];
            i++;
        }
        strdup[i] = '\0';
    }
    return (strdup);
}
