/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strchr.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: nvan-der <nvan-der@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/10/30 17:55:09 by nvan-der       #+#    #+#                */
/*   Updated: 2019/11/05 18:57:54 by nvan-der      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

char	*ft_strchr(const char *s, int c)
{
	const char		*src;
	unsigned long	i;
	unsigned long	n;

	i = 0;
	n = 0;
	src = s;
	while (s[n] >= 001 && s[n] <= 0177)
		n++;
	n++;
	while (i < n)
	{
		if (src[i] == '\0' && c != '\0')
			return (NULL);
		if (src[i] == c)
			return ((char *)s + i);
		i++;
	}
	return (NULL);
}
