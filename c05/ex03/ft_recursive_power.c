/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_recursive_power.c                               :+:    :+:            */
/*                                                     +:+                    */
/*   By: farodrig <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/08/31 21:40:59 by farodrig      #+#    #+#                 */
/*   Updated: 2020/08/31 21:42:38 by farodrig      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_power(int nb, int power)
{
	if (power < 0)
	{
		return (0);
	}
	else if (power < 1)
	{
		return (1);
	}
	else
	{
		return (nb * ft_recursive_power(nb, power - 1));
	}
}
