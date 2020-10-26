/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_putnbr.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: farodrig <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/08/18 15:43:59 by farodrig      #+#    #+#                 */
/*   Updated: 2020/08/18 15:47:27 by farodrig      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	print(char c);

void	ft_putnbr(int nb)
{
	if (nb == -2147483648)
	{
		print('-');
		print('2');
		ft_putnbr(147483648);
	}
	else if (nb < 0)
	{
		print('-');
		ft_putnbr(-nb);
	}
	else if (nb >= 10)
	{
		ft_putnbr(nb / 10);
		ft_putnbr(nb % 10);
	}
	else
	{
		print(nb + '0');
	}
}

void	print(char c)
{
	write(1, &c, 1);
}
