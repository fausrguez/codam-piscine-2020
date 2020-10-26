/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_print_numbers.c                                 :+:    :+:            */
/*                                                     +:+                    */
/*   By: farodrig <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/08/13 18:51:23 by farodrig      #+#    #+#                 */
/*   Updated: 2020/08/13 18:51:28 by farodrig      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

const char g_digits[] = {48, 49, 50, 51, 52, 53, 54, 55, 56, 57};
const short int g_digits_size = sizeof(g_digits);

void	ft_print_numbers(void)
{
	int i;

	i = 0;
	while (i < g_digits_size)
	{
		write(1, &g_digits[i], 1);
		i++;
	}
}
