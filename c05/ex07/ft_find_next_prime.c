/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_find_next_prime.c                               :+:    :+:            */
/*                                                     +:+                    */
/*   By: farodrig <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/09/01 15:36:12 by farodrig      #+#    #+#                 */
/*   Updated: 2020/09/02 21:44:10 by farodrig      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime(int nb)
{
	int	i;
	int	m;

	m = nb / 2;
	i = 2;
	if (nb < 2)
		return (0);
	if (nb % 2 != 0 || nb % 3 != 0 || nb % 5 != 0 || nb % 7 != 0)
	{
		while (i <= m)
		{
			if (nb % i == 0)
				return (0);
			++i;
		}
		return (1);
	}
	else
		return (0);
}

int	ft_find_next_prime(int nb)
{
	int	result_value;

	if (nb <= 1)
	{
		return (2);
	}
	if (!ft_is_prime(nb))
	{
		result_value = 0;
		while (result_value != 1)
		{
			++nb;
			result_value = ft_is_prime(nb);
		}
		return (nb);
	}
	return (nb);
}
