/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strjoin.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: nvan-der <nvan-der@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/11/07 18:54:43 by nvan-der       #+#    #+#                */
/*   Updated: 2019/11/13 14:13:05 by nvan-der      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char			*ft_strjoin(char const *s1, char const *s2)
{
	char	*result;
	int		sizestr;

	if (s1 == NULL || s2 == NULL)
		return (NULL);
	sizestr = ft_strlen((char *)s1);
	sizestr += ft_strlen((char *)s2);
	sizestr++;
	result = malloc(sizeof(char) * sizestr);
	if (result == NULL)
		return (NULL);
	ft_strlcpy(result, s1, sizestr);
	ft_strlcat(result, s2, sizestr);
	return (result);
}
