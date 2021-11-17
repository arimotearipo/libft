/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wwan-taj <wwan-taj@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/09 02:11:26 by wwan-taj          #+#    #+#             */
/*   Updated: 2021/06/09 02:11:26 by wwan-taj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *str, size_t len)
{
	size_t			i;
	unsigned char	*newstr;

	newstr = (unsigned char *)str;
	i = 0;
	while (i < len)
	{
		newstr[i] = '\0';
		i++;
	}
}
