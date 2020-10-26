/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_str_is_alpha.c                                  :+:    :+:            */
/*                                                     +:+                    */
/*   By: farodrig <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/08/25 12:32:40 by farodrig      #+#    #+#                 */
/*   Updated: 2020/08/25 13:06:36 by farodrig      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_alpha(char *str)
{
	int c;

	c = 0;
	while (str[c] != '\0')
	{
		if (str[c] < 65 || str[c] > 90)
		{
			if (str[c] < 97 || str[c] > 122)
			{
				return (0);
			}
		}
		c++;
	}
	return (1);
}
