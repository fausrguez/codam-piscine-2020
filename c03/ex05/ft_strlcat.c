/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strlcat.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: farodrig <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/08/26 18:59:50 by farodrig      #+#    #+#                 */
/*   Updated: 2020/09/01 15:55:46 by farodrig      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

unsigned int	str_length(char *str)
{
	unsigned int size;

	size = 0;
	while (str[size] != '\0')
	{
		size++;
	}
	return (size);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int c;
	unsigned int src_size;
	unsigned int dest_size;

	c = 0;
	src_size = str_length(src);
	dest_size = str_length(dest);
	while (c < size - 1 && c <= src_size)
	{
		dest[dest_size + c] = src[c];
		c++;
	}
	if (c == dest_size || c <= 0)
	{
		return (0);
	}
	dest[dest_size + c] = '\0';
	return (str_length(dest) + 1);
}
