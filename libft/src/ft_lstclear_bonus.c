/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear_bonus.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plang <plang@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/15 11:18:54 by plang             #+#    #+#             */
/*   Updated: 2024/02/12 15:23:27 by plang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*cur;
	t_list	*prev;

	if (!*lst)
		return ;
	cur = *lst;
	while (cur != NULL)
	{
		prev = cur;
		cur = cur->next;
		del(prev->content);
		free(prev);
	}
	*lst = NULL;
}
