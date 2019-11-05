/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strdup.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: nvan-der <nvan-der@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/10/31 13:59:17 by nvan-der       #+#    #+#                */
/*   Updated: 2019/11/05 18:21:54 by nvan-der      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strdup(const char *s1)
{
	size_t	size;
	size_t	i;
	char	*ret;

	size = 0;
	i = 0;
	while (s1[size] != '\0')
		size++;
	if ((ret = malloc(size * sizeof(char) + 1)) == NULL)
		return (NULL);
	while (i < size)
	{
		ret[i] = s1[i];
		i++;
	}
	ret[i] = '\0';
	return (ret);
}
