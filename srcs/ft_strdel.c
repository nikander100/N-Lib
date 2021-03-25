/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strdel.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: nvan-der <nvan-der@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/03/25 22:28:03 by nvan-der      #+#    #+#                 */
/*   Updated: 2021/03/25 22:39:12 by nvan-der      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
**This function takes in the parameter of an address to a chain of characters
**that should be freed and then set to NULL. We do this by running our ft_memdel
**function and cast the pointer address as a void that we putinto its parameter.
*/

void	ft_strdel(char **as)
{
	ft_memdel((void **)as);
}