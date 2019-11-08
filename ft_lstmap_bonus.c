/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_lstmap_bonus.c                                  :+:    :+:            */
/*                                                     +:+                    */
/*   By: nvan-der <nvan-der@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/11/07 21:29:59 by nvan-der       #+#    #+#                */
/*   Updated: 2019/11/07 23:10:54 by nvan-der      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list *map;
	t_list *tmp;

	if (lst == NULL || del == NULL || f == NULL)
		return (NULL);
	tmp = f(lst);
	map = tmp;
	while (lst->next)
	{
		lst = lst->next;
		if (!(tmp->next = f(lst)))
		{
			ft_lstclear(&map, del);
			return (NULL);
		}
		tmp = tmp->next;
	}
	return (map);
}
