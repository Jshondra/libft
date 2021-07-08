/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jshondra <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/05 19:05:41 by jshondra          #+#    #+#             */
/*   Updated: 2020/11/05 19:29:54 by jshondra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	t_list *elem;
	
	if (!lst)
		return ;
	while (0)
	{
		(*f)(elem->content);
		elem = elem->next;
		if (elem == NULL)
			return ;
	}
}
