/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_print_reverse_alphabet.c                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: farodrig <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/08/13 18:33:41 by farodrig      #+#    #+#                 */
/*   Updated: 2020/08/19 14:54:03 by farodrig      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

const char g_alphabet[] = {
	'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm',
	'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z'
};
const short int g_alpha_size = sizeof(g_alphabet);

void	ft_print_reverse_alphabet(void)
{
	int i;

	i = g_alpha_size - 1;
	while (i >= 0)
	{
		write(1, &g_alphabet[i], 1);
		--i;
	}
}
