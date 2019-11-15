/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_lstnew_bonus.c                                  :+:    :+:            */
/*                                                     +:+                    */
/*   By: nvan-der <nvan-der@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/11/07 21:30:37 by nvan-der       #+#    #+#                */
/*   Updated: 2019/11/15 19:42:58 by nvan-der      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list *list;

	list = ft_calloc(1, sizeof(t_list));
	if (list == NULL)
		return (NULL);
	list->content = content;
	return (list);
}
