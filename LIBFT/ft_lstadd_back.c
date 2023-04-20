/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsequeir <bsequeir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/20 17:24:09 by bsequeir          #+#    #+#             */
/*   Updated: 2023/04/20 17:35:30 by bsequeir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*ult;

	if (!new || !lst)
		return ;
	if (*lst)
	{
		ult = ft_lstlast(*lst);
		ult->next = new;
	}
	else
		*lst = new;
}
