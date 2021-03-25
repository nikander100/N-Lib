/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strclr.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: nvan-der <nvan-der@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/03/25 22:20:48 by nvan-der      #+#    #+#                 */
/*   Updated: 2021/03/25 22:20:48 by nvan-der      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** This function assigns the value '\0' to all the characters in a chain that
** is passed to it's parameter. This sounds similar to the ft_bzero function but
** we are changing the value of existing characters to '\0' to clear the 
** existing string rather than putting '\0' to placehold in a newly allocated 
** memory zone
*/

void	ft_strclr(char *s)
{
	unsigned int	i;

	i = 0;
	while (s[i] != '\0')
	{
		s[i] = '\0';
		i++;
	}
}