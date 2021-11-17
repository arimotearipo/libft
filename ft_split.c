/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wwan-taj <wwan-taj@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/22 17:56:32 by wwan-taj          #+#    #+#             */
/*   Updated: 2021/07/03 10:41:42 by wwan-taj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	int	ft_numofwords(char *s, char c)
{
	int	isword;
	int	count;

	isword = 0;
	count = 0;
	while (*s)
	{
		if (*s != c && isword == 0)
		{
			isword = 1;
			count++;
		}
		if (*s == c)
		{
			isword = 0;
		}
		s++;
	}
	return (count);
}

static	void	*freeall(char **tab, int i)
{
	while (i >= 0)
	{
		free(tab[i]);
		i--;
	}
	return (NULL);
}

static	int	wordend(char *s, char c)
{
	int	end;

	end = 0;
	while (*s != c && *s != '\0')
	{
		end++;
		s++;
	}
	return (end);
}

char	**ft_split(char const *s, char c)
{
	int		i;
	int		numofwords;
	char	**tab;
	int		end;

	if (!s)
		return (NULL);
	numofwords = ft_numofwords((char *)s, c);
	tab = (char **)malloc(sizeof(char *) * (numofwords + 1));
	if (!tab)
		return (NULL);
	i = 0;
	while (i < numofwords)
	{
		while (*s == c && c != '\0')
			s++;
		end = wordend((char *)s, c);
		tab[i] = ft_substr(s, 0, end);
		if (!tab[i])
			return (freeall(tab, i));
		s += end;
		i++;
	}
	tab[i] = NULL;
	return (tab);
}
