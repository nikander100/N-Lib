/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_convert_to_hex.c                                :+:    :+:            */
/*                                                     +:+                    */
/*   By: nvan-der <nvan-der@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/08/20 13:54:59 by nvan-der      #+#    #+#                 */
/*   Updated: 2021/03/22 14:15:18 by nvan-der      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"
#include <stdlib.h>

static char	*reverse(char *hex)
{
	char	*result;
	int		i;
	int		j;

	j = 0;
	i = ft_strlen(hex) - 1;
	result = malloc(sizeof(char) * ft_strlen(hex) + 1);
	if (result == NULL)
		return (NULL);
	while (i >= 0)
	{
		result[j] = hex[i];
		j++;
		i--;
	}
	result[j] = '\0';
	free(hex);
	return (result);
}

static char	*cleanup(int i, char *hex)
{
	char	*result;

	result = NULL;
	hex = reverse(hex);
	if (i < 12)
	{
		hex[i] = '\0';
		result = ft_strdup(hex);
		free(hex);
		return (result);
	}
	return (hex);
}

char	*ft_convert_to_hex(unsigned long value)
{
	char	*hex;
	long	leftover;
	int		i;

	i = 0;
	hex = malloc(sizeof(char) * 12);
	if (hex == NULL)
		return (NULL);
	while (value)
	{
		leftover = value % 16;
		if (leftover < 10)
			hex[i] = 48 + leftover;
		else
			hex[i] = 55 + leftover;
		i++;
		value = value / 16;
	}
	if (i != 12)
		hex[i] = '\0';
	hex = cleanup(i, hex);
	return (hex);
}
