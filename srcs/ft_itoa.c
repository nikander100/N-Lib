/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_itoa.c                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: nvan-der <nvan-der@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/11/05 15:19:54 by nvan-der      #+#    #+#                 */
/*   Updated: 2022/09/15 22:34:38 by nvan-der      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

static int	ft_intlength(int n)
{
	int	i;

	i = 0;
	if (n == 0)
		i++;
	while (n != 0)
	{
		n = n / 10;
		i++;
	}
	return (i);
}

static int	ft_check_neg(int number)
{
	int		neg;

	neg = 0;
	if (number < 0)
		neg = 1;
	return (neg);
}

static int	ft_check_maxmin(int min)
{
	int		maxmin;

	maxmin = 0;
	if (min == -2147483648)
		maxmin = 1;
	return (maxmin);
}

static char	*ft_makestring(char *result, int n, int i, int neg)
{
	while (n != 0)
	{
		result[i + neg - 1] = n % 10 + '0';
		i--;
		n = n / 10;
	}
	if (neg == 1)
		result[i] = '-';
	return (result);
}

char	*ft_itoa(int n)
{
	char	*result;
	int		maxmin;
	int		neg;
	int		i;

	maxmin = ft_check_maxmin(n);
	neg = ft_check_neg(n);
	if (neg == 1)
	{
		n = n + maxmin;
		n = -n;
	}
	i = ft_intlength(n);
	result = (char *)malloc(sizeof(char) * i + neg + 1);
	if (result == NULL)
		return (NULL);
	result[i + neg] = '\0';
	if (n == 0)
		result[0] = '0';
	result = ft_makestring(result, n, i, neg);
	if (maxmin == 1)
		result[i] = '8';
	return (result);
}

// TODO NEW itoa, add saftey checks
int	print_nbr(int nbr)
{
	int size = count_size(nbr, 10);
	if (nbr == INT_MIN)
	{
		write(1, "-2147483648", 11);
		return (11);
	}
	if (nbr < 0)
	{
		write(1, "-", 1);
		size++;
		ft_putnbr((nbr * -1), 10, BASE10);
	}
	else
		ft_putnbr(nbr, 10, BASE10);
	if (nbr == 0)
		size++;
	return (size);
}
