/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wwan-taj <wwan-taj@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/21 23:34:57 by wwan-taj          #+#    #+#             */
/*   Updated: 2021/07/03 19:25:50 by wwan-taj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	charin(char const c, char const *set)
{
	while (*set)
	{
		if (*set == c)
		{
			return (1);
		}
		set++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	int		reverse;
	int		forward;
	int		size;
	char	*trimmed;

	if (!s1)
		return (NULL);
	reverse = ft_strlen(s1) - 1;
	forward = 0;
	while (charin(s1[forward], set))
		forward++;
	while (charin(s1[reverse], set))
		reverse--;
	if (reverse < forward)
		return (ft_strdup(""));
	size = reverse - forward + 1;
	trimmed = malloc(size + 1);
	if (!trimmed)
		return (NULL);
	s1 += forward;
	ft_memcpy(trimmed, s1, size);
	trimmed[size] = '\0';
	return (trimmed);
}
