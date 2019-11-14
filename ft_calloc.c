/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_calloc.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: nvan-der <nvan-der@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/10/31 12:31:16 by nvan-der       #+#    #+#                */
/*   Updated: 2019/11/14 14:04:52 by nvan-der      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	unsigned char	*ret;
	size_t			i;

	i = count * size;
	ret = malloc(i);
	if (ret == NULL)
		return (NULL);
	ft_bzero(ret, i);
	return ((void *)ret);
}
