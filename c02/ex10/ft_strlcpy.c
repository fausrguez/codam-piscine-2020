/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strlcpy.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: farodrig <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/08/25 17:54:11 by farodrig      #+#    #+#                 */
/*   Updated: 2020/08/27 15:01:13 by farodrig      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

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

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int c;
	unsigned int dest_length;

	c = 0;
	dest_length = str_length(dest);
	if (size > 0)
	{
		while (src[c] != '\0' && c + 1 < size && c + 1 < dest_length)
		{
			dest[c] = src[c];
			c++;
		}
		while ((c < size - 1 || src[c] != '\0') && c < dest_length)
		{
			dest[c] = 0;
			c++;
		}
	}
	return (str_length(src));
}
