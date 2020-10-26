/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_rev_params.c                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: farodrig <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/09/02 18:53:28 by farodrig      #+#    #+#                 */
/*   Updated: 2020/09/02 18:53:30 by farodrig      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	print_char(char c)
{
	write(1, &c, 1);
}

void	print_str(char *str)
{
	while (*str != '\0')
	{
		print_char(*str);
		str++;
	}
}

int		main(int argc, char **argv)
{
	int i;

	if (argc > 1)
	{
		i = argc - 1;
		while (i > 0)
		{
			print_str(argv[i]);
			print_char('\n');
			i--;
		}
	}
}
