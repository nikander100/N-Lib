/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_atoi.c                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: nvan-der <nvan-der@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/10/28 14:19:34 by nvan-der       #+#    #+#                */
/*   Updated: 2019/11/05 18:32:46 by nvan-der      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

int		ft_atoi(char *str)
{
	long	out;
	int		sign;
	long	max;

	max = 9223372036854775807;
	sign = 1;
	out = 0;
	while (*str == ' ' || *str == '\t' || *str == '\n' || *str == '\v' ||
			*str == '\f' || *str == '\r')
		str++;
	if (*str == '-')
	{
		sign = -1;
		str++;
	}
	else if (*str == '+')
		str++;
	while (*str != '\0' && *str >= '0' && *str <= '9')
	{
		if (out > max / 10)
			return (sign == -1 ? 0 : -1);
		out = out * 10 + *str - '0';
		str++;
	}
	return (out * sign);
}
