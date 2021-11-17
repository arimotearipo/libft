/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wwan-taj <wwan-taj@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/09 01:27:35 by wwan-taj          #+#    #+#             */
/*   Updated: 2021/06/09 01:27:35 by wwan-taj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"libft.h"
#include	<string.h>

void	*ft_memset(void *str, int c, size_t len)
{
	unsigned char	*ptr;

	ptr = str;
	while (len > 0)
	{
		*ptr = c;
		ptr++;
		len--;
	}
	return (str);
}
