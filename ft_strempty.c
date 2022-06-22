/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strempty.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wwan-taj <wwan-taj@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/22 13:43:54 by wwan-taj          #+#    #+#             */
/*   Updated: 2022/06/22 13:46:33 by wwan-taj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
Will check if the string is empty (full of whitespaces only) or not.
Return 1 if it is not empty, and 0 if it is empty.
*/
int	ft_strempty(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] > 32)
			return (1);
		i++;
	}
	return (0);
}
