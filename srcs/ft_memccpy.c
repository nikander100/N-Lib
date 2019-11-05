/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_memccpy.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: nvan-der <nvan-der@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/10/30 13:04:40 by nvan-der       #+#    #+#                */
/*   Updated: 2019/10/30 14:05:49 by nvan-der      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include <stdio.h>
#include <string.h>

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	const char		*s;
	unsigned char	*d;

	s = src;
	d = dst;
	while (n != 0)
	{
		*d = *s;
		if (*s == c)
			break ;
		d++;
		s++;
		n--;
	}
	return (d);
}
