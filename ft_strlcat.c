/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wwan-taj <wwan-taj@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/15 01:36:04 by wwan-taj          #+#    #+#             */
/*   Updated: 2021/07/03 10:41:40 by wwan-taj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	unsigned int	destlen;
	unsigned int	srclen;

	destlen = 0;
	srclen = 0;
	while (*dest)
	{
		dest++;
		destlen++;
	}
	while (*src)
	{
		if (++srclen < size && destlen + srclen < size)
			*dest++ = *src;
		src++;
	}
	if (destlen > size)
		return (srclen + size);
	else
	{
		if (size)
			*dest = 0;
		return (destlen + srclen);
	}
}
