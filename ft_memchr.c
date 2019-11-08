/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_memchr.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: nvan-der <nvan-der@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/10/30 15:47:57 by nvan-der       #+#    #+#                */
/*   Updated: 2019/11/07 19:22:31 by nvan-der      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	const char		*src;
	size_t			i;

	i = 0;
	src = s;
	while (i < n)
	{
		if (src[i] == c)
			return ((char *)s + i);
		i++;
	}
	return (NULL);
}
