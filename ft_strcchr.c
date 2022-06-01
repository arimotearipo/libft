/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wwan-taj <wwan-taj@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/01 16:18:54 by wwan-taj          #+#    #+#             */
/*   Updated: 2022/06/01 18:29:17 by wwan-taj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strcchr(char *s1, char *s2, char c)
{
	int		i;
	int		res;
	char	*str;

	printf("ADASDASDASDASD\n");
	i = 0;
	while (s1[i] != '\0' && s1[i] != c)
		i++;
	str = ft_substr(s1, 0, i);
	printf("str in function: %s\n", str);
	res = ft_strcmp(str, s2);
	free(str);
	return (res);
}