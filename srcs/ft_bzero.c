/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_bzero.c                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: nvan-der <nvan-der@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/10/29 19:00:37 by nvan-der       #+#    #+#                */
/*   Updated: 2019/10/30 19:16:30 by nvan-der      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

void	ft_bzero(void *str, size_t n)
{
	unsigned char	*dest;
	size_t			i;

	dest = str;
	i = 0;
	while (i < n)
	{
		*(dest + i) = '\0';
		i++;
	}
}
