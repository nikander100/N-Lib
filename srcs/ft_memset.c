/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_memset.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: nvan-der <nvan-der@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/10/29 16:36:33 by nvan-der       #+#    #+#                */
/*   Updated: 2019/10/30 13:04:27 by nvan-der      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

void	*ft_memset(void *str, int c, size_t n)
{
	unsigned char	*d;
	size_t			i;

	d = str;
	i = 0;
	while (i < n)
	{
		*(d + i) = c;
		i++;
	}
	return (d);
}
