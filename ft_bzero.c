/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_bzero.c                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: nvan-der <nvan-der@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/10/29 19:00:37 by nvan-der      #+#    #+#                 */
/*   Updated: 2020/06/04 12:22:08 by nvan-der      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	char	*dst;
	size_t	i;

	dst = (char *)s;
	i = 0;
	while (i < n)
	{
		*(dst + i) = '\0';
		i++;
	}
}
