/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_push_back.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlange <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/02/07 18:21:59 by jlange            #+#    #+#             */
/*   Updated: 2016/02/07 18:22:00 by jlange           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void		ft_push_back(t_list **list, void *content, size_t content_size)
{
	t_list	*tmp;

	tmp = *list;
	if (tmp)
	{
		tmp = ft_create_elem(content, content_size);
		while (tmp->next)
			tmp->next = tmp;
	}
	else
		ft_create_elem(content, content_size);
}
