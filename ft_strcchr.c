/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wwan-taj <wwan-taj@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/01 16:18:54 by wwan-taj          #+#    #+#             */
/*   Updated: 2022/06/02 18:31:13 by wwan-taj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strcchr(char *s1, char *s2, char c)
{
	int		i;
	int		res;
	char	*str;

	i = 0;
	while (s1[i] != '\0' && s1[i] != c)
		i++;
	str = ft_substr(s1, 0, i);
	res = ft_strcmp(str, s2);
	free(str);
	return (res);
}
