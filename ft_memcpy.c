/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wwan-taj <wwan-taj@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/15 00:08:44 by wwan-taj          #+#    #+#             */
/*   Updated: 2021/06/18 00:48:18 by wwan-taj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>
#include <stdio.h>

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t			i;
	unsigned char	*newsrc;
	unsigned char	*newdst;

	i = 0;
	if (!dst && !src)
		return (NULL);
	newsrc = (unsigned char *)src;
	newdst = (unsigned char *)dst;
	while (i < n)
	{
		newdst[i] = newsrc[i];
		i++;
	}
	return (dst);
}
