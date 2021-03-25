/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_memalloc.c                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: nvan-der <nvan-der@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/03/25 22:13:57 by nvan-der      #+#    #+#                 */
/*   Updated: 2021/03/25 22:13:57 by nvan-der      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

	/*
	**This function is designed to allocate and return a "fresh" zone of memory.
	**The memory allocated is initialized to 0 using our ft_bzero function. If
	**the allocation fails we return NULL.
	*/

void	*ft_memalloc(size_t size)
{
	void 	*m;

	m = malloc(size);
	if (m == NULL)
		return (NULL);
	ft_bzero(m, size);
	return (m);
}