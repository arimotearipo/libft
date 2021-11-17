/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wwan-taj <wwan-taj@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/25 16:33:56 by wwan-taj          #+#    #+#             */
/*   Updated: 2021/06/30 13:14:13 by wwan-taj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*temp;
	t_list	*nextnode;

	if (!del)
		return ;
	temp = *lst;
	while (temp)
	{
		nextnode = temp->next;
		ft_lstdelone(temp, del);
		temp = nextnode;
	}
	*lst = NULL;
}
