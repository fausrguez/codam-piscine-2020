/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strncmp.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: farodrig <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/08/26 14:50:20 by farodrig      #+#    #+#                 */
/*   Updated: 2020/09/01 15:55:35 by farodrig      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int c;

	if (n == 0)
	{
		return (0);
	}
	c = 0;
	while (s1[c] != '\0' && s2[c] != '\0' &&
		s1[c] == s2[c] && c < n - 1)
	{
		c++;
	}
	return (s1[c] - s2[c]);
}
