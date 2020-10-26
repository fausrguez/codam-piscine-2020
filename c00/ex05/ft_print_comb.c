/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_print_comb.c                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: farodrig <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/08/18 13:09:36 by farodrig      #+#    #+#                 */
/*   Updated: 2020/08/18 14:10:14 by farodrig      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

const char g_ascii_digits[] = {48, 49, 50, 51, 52, 53, 54, 55, 56, 57};
const short int g_digits_size = sizeof(g_ascii_digits);

void	print_combinations(int i, int j, int k);
void	print(char c);

void	ft_print_comb(void)
{
	int i;
	int j;
	int k;

	i = 0;
	j = i + 1;
	k = j + 1;
	print_combinations(i, j, k);
}

void	print_combinations(int i, int j, int k)
{
	while (i < g_digits_size)
	{
		while (j < g_digits_size)
		{
			while (k < g_digits_size)
			{
				if (k != j && k != i)
				{
					print(g_ascii_digits[i]);
					print(g_ascii_digits[j]);
					print(g_ascii_digits[k]);
					if (i + 3 != g_digits_size)
					{
						print(',');
						print(' ');
					}
				}
				k++;
			}
			k = j + 1;
			j++;
		}
		j = i + 1;
		i++;
	}
}

void	print(char c)
{
	write(1, &c, 1);
}
