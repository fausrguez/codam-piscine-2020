/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_str_is_numeric.c                                :+:    :+:            */
/*                                                     +:+                    */
/*   By: farodrig <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/08/25 13:04:44 by farodrig      #+#    #+#                 */
/*   Updated: 2020/08/25 13:06:52 by farodrig      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_numeric(char *str)
{
	int c;

	c = 0;
	while (str[c] != '\0')
	{
		if (str[c] < 48 || str[c] > 57)
		{
			return (0);
		}
		c++;
	}
	return (1);
}
