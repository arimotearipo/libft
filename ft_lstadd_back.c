/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wwan-taj <wwan-taj@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/25 16:13:33 by wwan-taj          #+#    #+#             */
/*   Updated: 2021/07/02 14:30:29 by wwan-taj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*lastone;

	if (!(*lst))
	{
		*lst = new;
	}
	else
	{
		lastone = ft_lstlast(*lst);
		lastone->next = new;
		new->next = NULL;
	}
}
