/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_split.c                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: nvan-der <nvan-der@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/11/02 18:56:08 by nvan-der       #+#    #+#                */
/*   Updated: 2019/11/13 14:08:41 by nvan-der      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	calc(char const *s, char c)
{
	size_t	count;

	count = 1;
	while (*s)
	{
		if (*s == c)
		{
			while (*s && *s == c)
				s++;
			if (s)
				count++;
		}
		s++;
	}
	return (count);
}

static char		*get_next_str(char const **s, char c)
{
	size_t	i;
	size_t	i2;
	char	*str;
	char	*ret;

	str = (char*)*s;
	i = 0;
	while (str[i] && str[i] != c)
		i++;
	i2 = 0;
	ret = malloc(sizeof(char) * i + 1);
	if (!ret)
		return (NULL);
	while (i2 < i)
	{
		ret[i2] = *str;
		str++;
		i2++;
	}
	ret[i2] = '\0';
	while (*str && *str == c)
		str++;
	*s = str;
	return (ret);
}

static void		clean_mem(char ***cln)
{
	size_t	i;

	i = 0;
	while ((*cln)[i])
	{
		free((*cln)[i]);
		i++;
	}
	free(*cln);
}

char			**ft_split(char const *s, char c)
{
	char	**arr;
	size_t	i;
	size_t	i2;

	if (!s)
		return (NULL);
	while (*s == c && *s)
		s++;
	i2 = 0;
	i = calc(s, c);
	arr = malloc(sizeof(char*) * (i + 1));
	if (!arr)
		return (NULL);
	while (i2 < i && *s)
	{
		arr[i2] = get_next_str(&s, c);
		if (arr[i2] == NULL)
		{
			clean_mem(&arr);
			return (NULL);
		}
		i2++;
	}
	arr[i2] = (char*)NULL;
	return (arr);
}
