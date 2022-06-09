/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_append2d.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wwan-taj <wwan-taj@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/09 15:42:53 by wwan-taj          #+#    #+#             */
/*   Updated: 2022/06/09 15:48:51 by wwan-taj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* 
** This function will take in the str and 
** append it to the last of the 2D array
*/

void	ft_append2d(char **arr, char *str)
{
	int		count;
	char	**new_arr;
	int		i;

	count = ft_2darrlen(arr);
	new_arr = malloc(sizeof(char *) * (count + 2));
	i = 0;
	while (i < count)
	{
		new_arr[i] = ft_strdup(arr[i]);
		i++;
	}
	new_arr[i] = ft_strdup(str);
	new_arr[++i] = NULL;
	free2d(arr);
	arr = new_arr;
}
