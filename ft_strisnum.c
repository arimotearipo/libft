/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strisnum.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wwan-taj <wwan-taj@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/09 13:17:52 by wwan-taj          #+#    #+#             */
/*   Updated: 2022/06/09 15:49:52 by wwan-taj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// Will check whether the string passes as *str argument is a number or not.
// The sign argument is an option whether it should accept either a positive
// or negative sign in front or not.
int	ft_strisnum(char *str, int sign)
{
	int	i;

	i = 0;
	if (sign == 1 && (str[i] == '-' || str[i] == '+'))
		i++;
	while (str[i])
	{
		if (str[i] < '0' || str[i] > '9')
			return (0);
		i++;
	}
	return (1);
}
