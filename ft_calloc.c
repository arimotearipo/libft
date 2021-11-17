/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wwan-taj <wwan-taj@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/18 17:50:33 by wwan-taj          #+#    #+#             */
/*   Updated: 2021/07/01 03:12:15 by wwan-taj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t num, size_t sizepernum)
{
	char			*dest;
	size_t			totalsize;

	totalsize = num * sizepernum;
	dest = malloc(totalsize);
	if (!dest)
		return (NULL);
	ft_bzero(dest, totalsize);
	return (dest);
}
