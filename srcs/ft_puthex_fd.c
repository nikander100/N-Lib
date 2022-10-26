/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_puthex_fd.c                                     :+:    :+:            */
/*                                                     +:+                    */
/*   By: nvan-der <nvan-der@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/09/15 22:31:10 by nvan-der      #+#    #+#                 */
/*   Updated: 2022/10/15 17:08:04 by nvan-der      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

// function to print hexadecimal value on fd
//todo add header to use putnbr

int	print_hex(int nbr, int fd)
{
	int size = count_size((unsigned int)nbr, 16);
	ft_putnbr_fd((unsigned int)nbr, 16, BASE16, fd);
	if (nbr == 0)
		size++;
	if (nbr < 0)
		size = 8;
	return (size);
}
