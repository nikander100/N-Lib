/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strmapi.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: nvan-der <nvan-der@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/11/07 18:56:32 by nvan-der      #+#    #+#                 */
/*   Updated: 2020/06/04 12:26:10 by nvan-der      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	i;
	char			*result;

	i = 0;
	if (s == NULL || f == NULL)
		return (NULL);
	result = ft_strdup(s);
	if (result == NULL)
		return (NULL);
	while (result[i])
	{
		result[i] = (*f)(i, s[i]);
		i++;
	}
	return (result);
}
