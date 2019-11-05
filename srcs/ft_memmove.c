/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_memmove.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: nvan-der <nvan-der@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/10/30 14:13:20 by nvan-der       #+#    #+#                */
/*   Updated: 2019/10/30 16:04:52 by nvan-der      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	const char	*s;
	char		*d;
	char		temp[len];
	size_t		i;

	i = 0;
	s = src;
	d = dst;
	while (i < len)
	{
		temp[i] = s[i];
		i++;
	}
	i = 0;
	while (i < len)
	{
		d[i] = temp[i];
		i++;
	}
	return (d);
}
