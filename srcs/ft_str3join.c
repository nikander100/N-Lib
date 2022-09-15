/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_str3join.c                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: nvan-der <nvan-der@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/09/15 21:53:32 by nvan-der      #+#    #+#                 */
/*   Updated: 2022/09/15 21:54:10 by nvan-der      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

//fucntion like string join but use str2 as conenctor.
//TODO make the connector a string insted of path

char	*ft_pathjoin(const char *s1, char connector, const char *s2)
{
	size_t	size_x;
	size_t	size_y;
	char	*result;

	if (!s1 || !s2)
		return (NULL);
	result = (char *)malloc(sizeof(char) * (ft_strlen(s1) + ft_strlen(s2) + 2));
	if (!result)
		return (NULL);
	size_x = 0;
	size_y = 0;
	while (s1[size_y])
		result[size_x++] = s1[size_y++];
	result[size_x++] = connector;
	size_y = 0;
	while (s2[size_y])
		result[size_x++] = s2[size_y++];
	result[size_x] = '\0';
	return (result);
}
