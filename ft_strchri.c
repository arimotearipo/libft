/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchri.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wwan-taj <wwan-taj@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/29 18:48:33 by wwan-taj          #+#    #+#             */
/*   Updated: 2022/05/29 18:57:54 by wwan-taj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strchri(char *str, int startindex, char c)
{
	if (!str || startindex < 0)
		return (-1);
	while (str[startindex] != '\0')
	{
		if (str[startindex] == c)
			return (startindex);
		startindex++;
	}
	return (-1);
}
