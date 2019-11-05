/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strdup.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: nvan-der <nvan-der@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/10/31 13:59:17 by nvan-der       #+#    #+#                */
/*   Updated: 2019/10/31 14:29:29 by nvan-der      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*strdup(const char *s1)
{
	size_t			len;
	size_t			i;
	unsigned char	*ret;
	void			*p;

	len = (s1) + 1;
	p = malloc(len);
	if (p = NULL)
		return (NULL);
	ret = (unsigned char *)p;
	while (len > i)
	{
		ret[i] = s1[i];
		i++;
	}
}
