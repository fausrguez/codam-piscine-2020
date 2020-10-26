/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_print_comb.c                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: farodrig <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/08/18 18:29:13 by farodrig      #+#    #+#                 */
/*   Updated: 2020/08/19 10:37:10 by farodrig      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void add_digit(int str[], int starting_pos, int size);
void display(int str[], int n);
int is_the_last_number(int str[], int i, int n);
void print(char c);

const int g_rev_numbers[] = {57, 56, 55, 54, 53, 52, 51, 50, 49, 48};

void	ft_print_combn(int n)
{
	int str[n];

	add_digit(str, 0, n);
}

void	add_digit(int str[], int digit_pos, int size)
{
	str[digit_pos] = '0';
	while (str[digit_pos] <= '9')
	{
		if (digit_pos + 1 == size)
		{
			display(str, size);
		}
		else
		{
			add_digit(str, digit_pos + 1, size);
		}
		str[digit_pos]++;
	}
}

void	display(int str[], int size)
{
	int digit;
	int next_digit_equal;

	digit = 0;
	next_digit_equal = 0;
	while (digit + 1 < size)
	{
		if (str[digit] >= str[digit + 1])
		{
			next_digit_equal = 1;
			return ;
		}
		digit++;
	}
	digit = 0;
	while (digit < size)
	{
		print(str[digit]);
		digit++;
	}
	if (!is_the_last_number(str, digit, size))
	{
		print(',');
		print(' ');
	}
}

int		is_the_last_number(int str[], int digit, int size)
{
	int pos;
	int this_is_the_end;

	pos = 0;
	while (pos < size)
	{
		if (str[digit - (pos + 1)] == g_rev_numbers[pos])
		{
			this_is_the_end = 1;
		}
		else
		{
			this_is_the_end = 0;
			break ;
		}
		pos++;
	}
	return (this_is_the_end);
}

void	print(char c)
{
	write(1, &c, 1);
}
