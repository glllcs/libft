/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lambrozi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/04 10:28:00 by lambrozi          #+#    #+#             */
/*   Updated: 2020/02/15 17:49:07 by lambrozi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Allocates and returns a new element. The variable ’content’ is
** initialized with the value of the parameter ’content’.
** The variable ’next’ is initialized to NULL.
*/

t_list	*ft_lstnew(void *content)
{
	t_list *new;

	if (!(new = (t_list *)malloc(sizeof(t_list))))
		return (0);
	new->content = content;
	new->next = NULL;
	return (new);
}
