/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strncmp.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: nvan-der <nvan-der@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/10/28 19:13:39 by nvan-der       #+#    #+#                */
/*   Updated: 2019/10/29 16:28:20 by nvan-der      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

int		ft_strncmp(const char *str1, const char *str2, size_t n)
{
	unsigned int i;

	i = 0;
	while (str1[i] != '\0' && str2[i] != '\0' && (i < n))
	{
		if (str1[i] - '0' > str2[i] - '0')
			return (1);
		else if (str1[i] - '0' < str2[i] - '0')
			return (-1);
		i++;
	}
	return (0);
}
