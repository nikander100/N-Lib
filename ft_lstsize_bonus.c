/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_lstsize_bonus.c                                 :+:    :+:            */
/*                                                     +:+                    */
/*   By: nvan-der <nvan-der@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/11/07 21:30:57 by nvan-der       #+#    #+#                */
/*   Updated: 2019/11/07 22:53:54 by nvan-der      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_lstsize(t_list *lst)
{
	int		i;
	t_list 	*list;

	list = lst;
	i = 0;
	while (list != NULL)
	{
		i++;
		list = list->next;
	}
	return (i);
}
