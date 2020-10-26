/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strcapitalize.c                                 :+:    :+:            */
/*                                                     +:+                    */
/*   By: farodrig <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/08/25 17:04:48 by farodrig      #+#    #+#                 */
/*   Updated: 2020/08/26 21:26:54 by farodrig      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		is_num(char c)
{
	if ((c >= 48 && c <= 57))
	{
		return (1);
	}
	return (0);
}

int		is_alpha(char c)
{
	if ((c >= 65 && c <= 90) ||
		(c >= 97 && c <= 122))
	{
		return (1);
	}
	return (0);
}

char	*ft_strlowcase(char *str)
{
	int c;

	c = 0;
	while (str[c] != '\0')
	{
		if (str[c] >= 65 && str[c] <= 90)
		{
			str[c] += 32;
		}
		c++;
	}
	return (str);
}

char	*ft_strcapitalize(char *str)
{
	int c;

	c = 0;
	ft_strlowcase(str);
	while (str[c] != 0)
	{
		if (is_alpha(str[c]))
		{
			if (!is_alpha(str[c - 1]) && !is_num(str[c - 1]))
			{
				str[c] -= 32;
			}
		}
		c++;
	}
	return (str);
}
