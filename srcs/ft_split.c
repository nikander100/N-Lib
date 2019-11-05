/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_split.c                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: nvan-der <nvan-der@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/11/02 18:56:08 by nvan-der       #+#    #+#                */
/*   Updated: 2019/11/05 16:25:34 by nvan-der      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

static int	count_splits(char const *s, char c)
{
	int i;
	int counter;

	i = 0;
	counter = 0;
	while (s[i] != '\0')
	{
		if (s[i] == c && s[i + 1] != c)
			counter++;
		i++;
	}
	if (s[i] != c)
		counter++;
	return (counter);
}

static int		find_next_start(char const *s, char c, int count)
{
	int i;
	int counter;

	i = 0;
	counter = 0;
	while (s[i] != '\0')
	{
		if (s[i] == c && s[i + 1] != c)
			counter++;
		if (counter == count)
			return (i);
		i++;
	}
	return (i);
}

static char		*put_into_array(char const *s, int start, int end)
{
	char	*result;
	int		i;
	int		size;

	size = end - start;
	if ((result = malloc(sizeof(char) * size)) == NULL)
		return (NULL);
	i = 0;
	if (start != 0)
		start -= 1;
	while (start < end)
	{
		result[i] = s[start];
		start++;
		i++;
	}
	return (result);
}

char	**ft_split(char const *s, char c)
{
	char	**result;
	int		i;
	int		i2;
	int		splits;

	splits = count_splits(s, c);
	if ((result = malloc(splits * sizeof(char*))) == NULL)
		return (NULL);
	i = 0;
	i2 = 0;
	while (i < splits)
	{
		result[i] = put_into_array(s, find_next_start(s, c, i),
							find_next_start(s, c, i + 1));
		i++;
	}
	return (result);
}
