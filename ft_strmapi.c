/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wwan-taj <wwan-taj@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/22 20:05:07 by wwan-taj          #+#    #+#             */
/*   Updated: 2021/06/22 20:42:29 by wwan-taj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>
#include <stdio.h>

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	int				len;
	char			*finalstr;
	unsigned int	i;

	if (!s || !f)
		return (NULL);
	len = ft_strlen(s);
	finalstr = malloc(len + 1);
	if (!finalstr)
		return (NULL);
	i = 0;
	while (s[i] != '\0')
	{
		finalstr[i] = f(i, s[i]);
		i++;
	}
	finalstr[i] = '\0';
	return (finalstr);
}
