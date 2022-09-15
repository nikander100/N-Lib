/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_putnbr_fd.c                                     :+:    :+:            */
/*                                                     +:+                    */
/*   By: nvan-der <nvan-der@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/11/06 13:32:02 by nvan-der      #+#    #+#                 */
/*   Updated: 2022/09/15 22:42:26 by nvan-der      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"
#define BASE10 "0123456789"
#define BASE16 "0123456789abcdef"

// TODO transfer over to new putnbr that has bases
void	ft_putnbr_fd(int n, int fd)
{
	long	i;

	i = (long)n;
	if (i < 0)
	{
		ft_putchar_fd('-', fd);
		i = i * -1;
	}
	if (i >= 10)
		ft_putnbr_fd(i / 10, fd);
	ft_putchar_fd(i % 10 + '0', fd);
}

void ft_putnbr_fd(long nbr, uint16_t base, char *base_str, int fd)
{
	if (nbr >= base)
		ft_putnbr_fd(nbr / base, base, base_str, fd);
	write(fd, &base_str[nbr % base], 1);
}
