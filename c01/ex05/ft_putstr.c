/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_putstr.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: farodrig <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/08/20 14:25:50 by farodrig      #+#    #+#                 */
/*   Updated: 2020/08/20 14:26:46 by farodrig      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void print(char c);

void	ft_putstr(char *str)
{
	int long c;

	c = 0;
	while (str[c] != '\0')
	{
		print(str[c]);
		c++;
	}
}

void	print(char c)
{
	write(1, &c, 1);
}
