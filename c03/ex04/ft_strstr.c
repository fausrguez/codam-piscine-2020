/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strstr.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: farodrig <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/08/26 18:49:19 by farodrig      #+#    #+#                 */
/*   Updated: 2020/08/26 18:49:54 by farodrig      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

int		str_length(char *str)
{
	int size;

	size = 0;
	while (str[size] != '\0')
	{
		size++;
	}
	return (size);
}

int		to_find_belongs_to_str(char *str, char *to_find, unsigned int c)
{
	unsigned int i;

	i = 0;
	while (to_find[i] != '\0')
	{
		if (str[c + i] != to_find[i])
		{
			return (0);
		}
		i++;
	}
	return (1);
}

char	*ft_strstr(char *str, char *to_find)
{
	unsigned int c;
	unsigned int occurence;

	occurence = -1;
	c = 0;
	if (str_length(to_find) == 0)
	{
		return (str);
	}
	while (str[c] != '\0')
	{
		if (str[c] == to_find[0])
		{
			if (to_find_belongs_to_str(str, to_find, c))
			{
				occurence = c;
				return (&str[occurence]);
			}
		}
		c++;
	}
	return (0);
}
