/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_memcpy.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: nvan-der <nvan-der@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/10/29 19:19:39 by nvan-der       #+#    #+#                */
/*   Updated: 2019/10/30 17:55:37 by nvan-der      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	const char		*s;
	unsigned char	*d;

	s = src;
	d = dst;
	while (n != 0)
	{
		*d = *s;
		d++;
		s++;
		n--;
	}
	return (d);
}
