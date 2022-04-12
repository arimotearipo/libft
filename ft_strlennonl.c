/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlennonl.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wwan-taj <wwan-taj@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/12 13:47:48 by wwan-taj          #+#    #+#             */
/*   Updated: 2022/04/12 13:47:50 by wwan-taj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strlennonl(char *s)
{
	int	count;

	count = 0;
	if (!s)
		return (0);
	while (s[count] != '\0' && s[count] != '\n')
		count++;
	return (count);
}
