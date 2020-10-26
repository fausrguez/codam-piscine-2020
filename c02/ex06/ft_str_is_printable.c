/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_str_is_printable.c                              :+:    :+:            */
/*                                                     +:+                    */
/*   By: farodrig <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/08/25 14:28:29 by farodrig      #+#    #+#                 */
/*   Updated: 2020/08/25 14:28:38 by farodrig      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_printable(char *str)
{
	int c;

	c = 0;
	while (str[c] != '\0')
	{
		if (str[c] < 32 || str[c] > 126)
		{
			return (0);
		}
		c++;
	}
	return (1);
}
