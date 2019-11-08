/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_lstadd_front_bonus.c                            :+:    :+:            */
/*                                                     +:+                    */
/*   By: nvan-der <nvan-der@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/11/07 21:27:59 by nvan-der       #+#    #+#                */
/*   Updated: 2019/11/07 22:10:28 by nvan-der      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_front(t_list **alst, t_list *new)
{
	t_list *new_list;

	new_list = malloc(sizeof(t_list));
	new_list = new;
	new_list->next = *alst;
	*alst = new_list;
}
