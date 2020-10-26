/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_putnbr_base.c                                   :+:    :+:            */
/*                                                     +:+                    */
/*   By: farodrig <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/08/27 21:39:29 by farodrig      #+#    #+#                 */
/*   Updated: 2020/08/27 21:40:03 by farodrig      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	print(char c)
{
	write(1, &c, 1);
}

int		get_base_size(char *base)
{
	int i;
	int z;

	i = 0;
	if (base[0] == '\0' || base[1] == '\0')
		return (0);
	while (base[i] != '\0')
	{
		if (base[i] == '+' || base[i] == '-' ||
			base[i] < 32 || base[i] > 126)
		{
			return (0);
		}
		z = i + 1;
		while (base[z] != '\0')
		{
			if (base[i] == base[z])
			{
				return (0);
			}
			z++;
		}
		i++;
	}
	return (i);
}

void	ft_putnbr_base(int nbr, char *base)
{
	int base_size;
	int cast_number[100];
	int i;

	i = 0;
	base_size = get_base_size(base);
	if (base_size > 0)
	{
		if (nbr < 0)
		{
			nbr = -nbr;
			print('-');
		}
		while (nbr > 0)
		{
			cast_number[i] = nbr % base_size;
			nbr = nbr / base_size;
			i++;
		}
		while (--i >= 0)
			print(base[cast_number[i]]);
	}
}
