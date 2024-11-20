/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear_bonus.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkasimi <nkasimi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/07 06:52:45 by nkasimi           #+#    #+#             */
/*   Updated: 2024/11/08 06:04:43 by nkasimi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*n_adrs;

	if (!lst || !del)
		return ;
	while (*lst != NULL)
	{
		n_adrs = (*lst)->next;
		del((*lst)->content);
		free(*lst);
		*lst = n_adrs;
	}
	*lst = NULL;
}
