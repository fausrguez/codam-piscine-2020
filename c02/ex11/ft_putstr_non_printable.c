/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_putstr_non_printable.c                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: farodrig <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/08/25 19:25:58 by farodrig      #+#    #+#                 */
/*   Updated: 2020/08/26 21:32:50 by farodrig      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void print(char c);
void print_hex(char c);
int set_hex_n_and_get_length(char decimal, char *hex);

void	ft_putstr_non_printable(char *str)
{
	int c;

	c = 0;
	while (str[c] != '\0')
	{
		if (str[c] < 32 || str[c] > 126)
		{
			print('\\');
			print_hex(str[c]);
		}
		else
		{
			print(str[c]);
		}
		c++;
	}
}

int		set_hex_n_and_get_length(char decimal, char *hex)
{
	long	remainder;
	int		i;

	i = 0;
	while (decimal != 0)
	{
		remainder = decimal % 16;
		if (remainder < 10)
		{
			hex[i++] = 48 + remainder;
		}
		else
		{
			hex[i++] = 55 + remainder;
		}
		decimal = decimal / 16;
	}
	return (i);
}

void	print_hex(char c)
{
	int		i;
	int		size;
	char	hex[100];

	size = set_hex_n_and_get_length(c, hex);
	i = size;
	while (i >= 0)
	{
		if (hex[i] < 32)
		{
			print(hex[i] + 48);
		}
		else
		{
			print(hex[i] + 32);
		}
		i--;
	}
}

void	print(char c)
{
	write(1, &c, 1);
}
