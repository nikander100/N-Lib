/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_lstdelone_bonus.c                               :+:    :+:            */
/*                                                     +:+                    */
/*   By: nvan-der <nvan-der@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/11/07 21:29:08 by nvan-der       #+#    #+#                */
/*   Updated: 2019/11/15 19:27:11 by nvan-der      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdelone(t_list *lst, void del(void *))
{
	if (lst == NULL)
		return ;
	del(lst->content);
	free(lst);
}
