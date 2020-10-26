/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_print_comb2.c                                   :+:    :+:            */
/*                                                     +:+                    */
/*   By: farodrig <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/08/18 14:13:28 by farodrig      #+#    #+#                 */
/*   Updated: 2020/08/19 15:33:05 by farodrig      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void print_set(int n);
void print(char c);

void	ft_print_comb2(void)
{
	int i;
	int j;

	i = -1;
	while (++i <= 98)
	{
		j = i;
		while (++j <= 99)
		{
			print_set(i);
			print(' ');
			print_set(j);
			if ((i < 98))
			{
				print(',');
				print(' ');
			}
		}
	}
}

void	print_set(int n)
{
	print((n / 10) + '0');
	print((n % 10) + '0');
}

void	print(char c)
{
	write(1, &c, 1);
}
