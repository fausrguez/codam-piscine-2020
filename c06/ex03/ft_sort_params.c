/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_sort_params.c                                   :+:    :+:            */
/*                                                     +:+                    */
/*   By: farodrig <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/09/02 19:25:33 by farodrig      #+#    #+#                 */
/*   Updated: 2020/09/02 19:27:16 by farodrig      ########   odam.nl         */
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

int		ft_strcmp(char *s1, char *s2)
{
	unsigned int c;

	c = 0;
	while (s1[c] != '\0' && s1[c] == s2[c])
	{
		c++;
	}
	return (s1[c] - s2[c]);
}

int		main(int argc, char **argv)
{
	int		i;
	char	*tmp;

	i = 1;
	while (i < argc - 1)
	{
		if (ft_strcmp(argv[i], argv[i + 1]) > 0)
		{
			tmp = argv[i];
			argv[i] = argv[i + 1];
			argv[i + 1] = tmp;
			i = 1;
		}
		else
			i++;
	}
	i = 1;
	while (i < argc)
	{
		print_str(argv[i]);
		print_char('\n');
		i++;
	}
	return (0);
}
