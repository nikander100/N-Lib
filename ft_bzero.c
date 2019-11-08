/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_bzero.c                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: nvan-der <nvan-der@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/10/29 19:00:37 by nvan-der       #+#    #+#                */
/*   Updated: 2019/11/07 19:17:47 by nvan-der      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

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
