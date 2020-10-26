/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_str_is_uppercase.c                              :+:    :+:            */
/*                                                     +:+                    */
/*   By: farodrig <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/08/25 13:21:39 by farodrig      #+#    #+#                 */
/*   Updated: 2020/08/25 13:24:02 by farodrig      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_uppercase(char *str)
{
	int c;

	c = 0;
	while (str[c] != '\0')
	{
		if (str[c] < 65 || str[c] > 90)
		{
			return (0);
		}
		c++;
	}
	return (1);
}
