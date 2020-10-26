/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_iterative_factorial.c                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: farodrig <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/08/31 21:15:15 by farodrig      #+#    #+#                 */
/*   Updated: 2020/08/31 21:26:17 by farodrig      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int res;
	int i;

	if (nb < 0)
	{
		return (0);
	}
	i = 1;
	res = 1;
	while (i <= nb)
	{
		res *= i;
		i++;
	}
	return (res);
}
