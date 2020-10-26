/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strncat.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: farodrig <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/08/26 15:36:27 by farodrig      #+#    #+#                 */
/*   Updated: 2020/08/26 20:51:31 by farodrig      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

unsigned int	str_length(char *str)
{
	int size;

	size = 0;
	while (str[size] != '\0')
	{
		size++;
	}
	return (size);
}

char			*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int c;
	unsigned int src_size;
	unsigned int dest_size;

	c = 0;
	src_size = str_length(src);
	dest_size = str_length(dest);
	while (c < nb && c <= src_size)
	{
		dest[dest_size + c] = src[c];
		c++;
	}
	dest[dest_size + c] = '\0';
	return (dest);
}
