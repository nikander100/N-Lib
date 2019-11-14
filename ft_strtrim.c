/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strtrim.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: nvan-der <nvan-der@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/11/07 17:20:49 by nvan-der       #+#    #+#                */
/*   Updated: 2019/11/14 15:02:38 by nvan-der      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	in_set(char s, char const *set)
{
	size_t i;

	i = 0;
	while (i < ft_strlen((char *)set))
	{
		if (s == set[i])
			return (1);
		i++;
	}
	return (0);
}

static size_t	in_range(char const *s1, char const *set, int end)
{
	size_t i;

	i = 0;
	while (s1[i] != '\0' && end == 0)
	{
		if (!in_set(s1[i], set))
			return (i);
		i++;
	}
	if (end)
	{
		i = ft_strlen((char *)s1) - 1;
		while (i > 0)
		{
			if (!in_set(s1[i], set))
				return (i);
			i--;
		}
	}
	return (0);
}

static char		*copy_str(char const *s1, size_t start, size_t end)
{
	char	*trimstr;
	size_t	i;
	size_t	i2;

	i = 0;
	i2 = 0;
	trimstr = malloc((end - start) + 2 * sizeof(char));
	if (trimstr == NULL)
		return (NULL);
	while (i2 < ft_strlen((char *)s1))
	{
		if (i2 >= start && i2 <= end)
		{
			trimstr[i] = s1[i2];
			i++;
		}
		i2++;
	}
	trimstr[i] = '\0';
	return (trimstr);
}

char			*ft_strtrim(char const *s1, char const *set)
{
	char	*trimstr;
	size_t	start;
	size_t	end;

	if (s1 == NULL)
		return (NULL);
	start = in_range(s1, set, 0);
	end = in_range(s1, set, 1);
	if (start == end)
		return (ft_strdup(""));
	trimstr = copy_str(s1, start, end);
	if (trimstr == NULL)
		return (NULL);
	return (trimstr);
}
