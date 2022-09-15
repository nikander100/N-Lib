/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_count_size.c                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: nvan-der <nvan-der@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/09/15 22:28:42 by nvan-der      #+#    #+#                 */
/*   Updated: 2022/09/15 22:29:19 by nvan-der      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

// fucntion to count size of a digit value with base

static int	count_size(int nbr, int base)
{
	int i = 0;
	while (nbr)
	{
		nbr /= base;
		i++;
	}
	return (i);
}
