/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_memset.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: nvan-der <nvan-der@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/10/29 16:36:33 by nvan-der       #+#    #+#                */
/*   Updated: 2019/11/14 14:20:24 by nvan-der      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	unsigned char	*d;
	size_t			i;

	d = (unsigned char *)b;
	i = 0;
	while (i < len)
	{
		*(d + i) = c;
		i++;
	}
	return (b);
}
