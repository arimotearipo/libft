/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wwan-taj <wwan-taj@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/18 00:42:27 by wwan-taj          #+#    #+#             */
/*   Updated: 2022/04/12 16:00:17 by wwan-taj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t n)
{
	unsigned char	*newsrc;
	unsigned char	*newdst;
	size_t			i;

	newsrc = (unsigned char *)src;
	newdst = (unsigned char *)dst;
	if (!dst && !src)
		return (NULL);
	i = 1;
	if (newsrc < newdst)
	{
		while (i <= n)
		{
			newdst[n - i] = newsrc[n - i];
			i++;
		}
	}
	else
		while (n--)
			*(newdst++) = *(newsrc++);
	return (dst);
}
