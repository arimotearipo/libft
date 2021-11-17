/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wwan-taj <wwan-taj@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/15 03:19:03 by wwan-taj          #+#    #+#             */
/*   Updated: 2021/06/17 23:46:52 by wwan-taj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include 	"libft.h"
#include	<string.h>
#include	<stdio.h>

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	size_t			i;
	unsigned char	*newsrc;
	unsigned char	*newdst;

	newsrc = (unsigned char *)src;
	newdst = (unsigned char *)dst;
	i = 0;
	if (!dst && !src)
		return (NULL);
	while (i < n)
	{
		newdst[i] = newsrc[i];
		if (newdst[i] == (unsigned char)c)
		{
			return (&newdst[i + 1]);
		}
		i++;
	}
	return (NULL);
}
