/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_memmove.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: nvan-der <nvan-der@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/10/30 14:13:20 by nvan-der      #+#    #+#                 */
/*   Updated: 2020/06/04 12:24:13 by nvan-der      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	const char	*s;
	char		*d;
	int			i;

	i = 0;
	s = (char *)src;
	d = (char *)dst;
	if (s == NULL && d == NULL)
		return (NULL);
	if (d < s)
		while (i < (int)len)
		{
			d[i] = s[i];
			i++;
		}
	else
	{
		i = (int)len;
		while (i != 0)
		{
			d[i - 1] = s[i - 1];
			i--;
		}
	}
	return (d);
}
