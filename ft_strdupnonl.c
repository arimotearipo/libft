/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdupnonl.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wwan-taj <wwan-taj@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/18 18:03:40 by wwan-taj          #+#    #+#             */
/*   Updated: 2022/04/05 12:55:26 by wwan-taj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdupnonl(const char *s)
{
	int		count;
	int		i;
	char	*news;

	count = 0;
	while (s[count] != '\0' && s[count] != '\n')
	{
		count++;
	}
	news = malloc(sizeof(char) * (count + 1));
	if (!news)
		return (NULL);
	i = 0;
	while (i < count)
	{
		news[i] = s[i];
		i++;
	}
	news[i] = '\0';
	return (news);
}
