/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_calloc.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: nvan-der <nvan-der@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/10/31 12:31:16 by nvan-der       #+#    #+#                */
/*   Updated: 2019/10/31 14:30:42 by nvan-der      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

void	*ft_calloc(size_t count, size_t size)
{
	void			*p;
	unsigned char	*ret;
	size_t			i;

	i = 0;
	p = malloc(count * size);
	if (p == NULL)
		return (NULL);
	ret = (unsigned char *)p;
	while ((count * size) > i)
	{
		ret[i] = 0;
		i++;
	}
	return (p);
}
