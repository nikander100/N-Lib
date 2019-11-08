/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strjoin.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: nvan-der <nvan-der@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/11/07 18:54:43 by nvan-der       #+#    #+#                */
/*   Updated: 2019/11/07 22:41:46 by nvan-der      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char		*calc_result_strjoin(int sizestr1, int sizestr2,
	char const *s1, char const *s2)
{
	char	*result;
	int		i;
	int		flag;

	i = 0;
	flag = 0;
	result = malloc((sizestr1 + sizestr2) * sizeof(char));
	if (result == NULL)
		return (NULL);
	while ((i < sizestr1 && flag == 0) || (i < sizestr2 && flag == 1))
	{
		if (i < sizestr1 && flag == 0)
		{
			result[i] = s1[i];
			if (i == sizestr1 - 1)
			{
				flag = 1;
				i = 0;
			}
		}
		if (i < sizestr2 && flag == 1)
			result[sizestr1 + i] = s2[i];
		i++;
	}
	return (result);
}

char			*ft_strjoin(char const *s1, char const *s2)
{
	char	*result;
	int		sizestr1;
	int		sizestr2;

	if (s1 == NULL || s2 == NULL)
		return (NULL);
	sizestr1 = ft_strlen((char *)s1);
	sizestr2 = ft_strlen((char *)s2);
	result = calc_result_strjoin(sizestr1, sizestr2, s1, s2);
	return (result);
}
