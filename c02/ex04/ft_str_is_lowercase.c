/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_str_is_lowercase.c                              :+:    :+:            */
/*                                                     +:+                    */
/*   By: farodrig <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/08/25 13:10:27 by farodrig      #+#    #+#                 */
/*   Updated: 2020/08/25 13:10:36 by farodrig      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_lowercase(char *str)
{
	int c;

	c = 0;
	while (str[c] != '\0')
	{
		if (str[c] < 97 || str[c] > 122)
		{
			return (0);
		}
		c++;
	}
	return (1);
}
