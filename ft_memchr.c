/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wwan-taj <wwan-taj@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/18 01:38:58 by wwan-taj          #+#    #+#             */
/*   Updated: 2021/07/01 16:49:27 by wwan-taj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*newstr;

	newstr = (unsigned char *)s;
	i = 0;
	while (i < n)
	{
		if (newstr[i] == (unsigned char)c)
		{
			return (&newstr[i]);
		}
		i++;
	}
	return (NULL);
}
