/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_memdel.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: nvan-der <nvan-der@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/03/25 22:00:25 by nvan-der      #+#    #+#                 */
/*   Updated: 2021/03/25 22:00:25 by nvan-der      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
**This function takes in the parameter of the address of a pointer. The zone
**pointed to should be liberated with free. The pointer is then set to NULL.
*/

void	ft_memdel(void **ap)
{
	free(*ap);
	*ap = NULL;
}