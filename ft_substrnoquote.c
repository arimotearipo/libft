/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substrnoquote.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wwan-taj <wwan-taj@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/25 14:38:28 by wwan-taj          #+#    #+#             */
/*   Updated: 2022/05/25 18:22:00 by wwan-taj         ###   ########.fr       */
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
        str[i] = s[start];
        i++;
        start++;
        if ((s[start] == '\'' || s[start] == '"') && (s[start + 1] > 32))
        {
            if ((s[start + 1] == '\'' || s[start + 1] == '"'))
                start += 2;
            else
                start += 1;
        }
    }
    str[i] = '\0';
    return (str);
}
