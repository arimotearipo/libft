/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substrnoquote.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wwan-taj <wwan-taj@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/25 14:38:28 by wwan-taj          #+#    #+#             */
/*   Updated: 2022/05/29 15:45:23 by wwan-taj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char    *ft_substrnoquote(char const *s, unsigned int start, size_t len)
{
    char    *str;
    size_t    i;

    if (!s || ft_strlen(s) < start)
        return (ft_strdup(""));
    if (len > ft_strlen(s) - start)
        len = ft_strlen(s) - start;
    str = malloc(len + 1);
    if (!str)
        return (NULL);
    i = 0;
    while (len--)
    {
		while (s[start] == '\'' || s[start] == '"')
			start++;
        str[i] = s[start];
        i++;
        start++;
    }
    str[i] = '\0';
    return (str);
}
