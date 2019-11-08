/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strlcat.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: nvan-der <nvan-der@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/10/31 15:10:50 by nvan-der       #+#    #+#                */
/*   Updated: 2019/11/07 19:21:47 by nvan-der      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t		ft_strlcat(char *dst, char *src, size_t dstsize)
{
	size_t			i;
	size_t			j;
	size_t			ret;

	i = 0;
	j = 0;
	ret = 0;
	while (dst[i] != '\0' && dstsize > i)
		i++;
	while (src[ret] != '\0')
		ret++;
	ret = ret + i;
	while (dstsize > i + 1)
	{
		dst[i] = src[j];
		i++;
		j++;
	}
	return (ret);
}
