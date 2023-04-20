/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsequeir <bsequeir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/20 18:39:00 by bsequeir          #+#    #+#             */
/*   Updated: 2023/04/20 19:33:31 by bsequeir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new1;
	t_list	*new2;

	if (!lst)
		return (0);
	new2 = 0;
	while (lst)
	{
		new1 = ft_lstnew(f(lst->content));
		if (!new1)
		{
			ft_lstclear(&new2, del);
			return (0);
		}
		ft_lstadd_back(&new2, new1);
		lst = lst->next;
	}
	return (new2);
}
