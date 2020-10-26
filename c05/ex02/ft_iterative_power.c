/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_iterative_power.c                               :+:    :+:            */
/*                                                     +:+                    */
/*   By: farodrig <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/08/31 21:33:46 by farodrig      #+#    #+#                 */
/*   Updated: 2020/09/02 21:43:08 by farodrig      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int	res;
	int	i;

	res = 1;
	i = power;
	if (power == 0)
		return (1);
	if (power < 0)
		return (0);
	if (power > 0)
	{
		while (i > 0)
		{
			res = res * nb;
			--i;
		}
		return (res);
	}
	return (0);
}
