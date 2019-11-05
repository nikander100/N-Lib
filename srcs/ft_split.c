/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_split.c                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: nvan-der <nvan-der@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/11/02 18:56:08 by nvan-der       #+#    #+#                */
/*   Updated: 2019/11/05 18:11:52 by nvan-der      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

static int		is_char(char c, char s)
{
	return (c == s);
}

static int		splits(char *str, char s)
{
	int	counter;

	counter = 0;
	while (*str)
	{
		while (*str && is_char(*str, s))
			str++;
		if (*str && !is_char(*str, s))
		{
			counter++;
			while (*str && !is_char(*str, s))
				str++;
		}
	}
	return (counter);
}

static char		*alloc(char *str, char s)
{
	char	*word;
	int		i;

	i = 0;
	while (str[i] && !is_char(str[i], s))
		i++;
	word = (char *)malloc(sizeof(char) * (i + 1));
	i = 0;
	while (str[i] && !is_char(str[i], s))
	{
		word[i] = str[i];
		i++;
	}
	word[i] = '\0';
	return (word);
}

char			**ft_split(char const *s, char c)
{
	char	**arr;
	int		i;

	if (s == NULL)
		return (NULL);
	if ((arr = (char **)malloc(sizeof(char *)
										* (splits((char *)s, c) + 1))) == NULL)
		return (NULL);
	i = 0;
	while (*s)
	{
		while (*s && is_char(*s, c))
			s++;
		if (*s && !is_char(*s, c))
		{
			arr[i] = alloc((char *)s, c);
			i++;
			while (*s && !is_char(*s, c))
				s++;
		}
	}
	arr[i] = NULL;
	return (arr);
}
