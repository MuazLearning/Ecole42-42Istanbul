/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmemis <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/11 18:14:16 by mmemis            #+#    #+#             */
/*   Updated: 2022/01/11 18:14:24 by mmemis           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	t_list	*elem;

	if (*lst == NULL)
		*lst = new;
	else
	{
		elem = new;
		elem->next = *lst;
		*lst = elem;
	}
}
