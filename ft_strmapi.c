/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strmapi.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: nvan-der <nvan-der@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/11/07 18:56:32 by nvan-der       #+#    #+#                */
/*   Updated: 2019/11/11 15:22:45 by nvan-der      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	i;
	char			*result;
	int				size;

	i = 0;
	if (s == NULL || f == NULL)
		return (NULL);
	size = ft_strlen((char *)s);
	result = malloc((size + 1) * sizeof(char));
	if (result == NULL)
		return (NULL);
	ft_memcpy(result, s, size);
	while (result[i])
	{
		result[i] = (*f)(i, result[i]);
		i++;
	}
	result[size] = '\0';
	return ((char *)result);
}
