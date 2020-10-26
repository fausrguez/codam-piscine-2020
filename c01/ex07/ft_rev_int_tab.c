/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_rev_int_tab.c                                   :+:    :+:            */
/*                                                     +:+                    */
/*   By: farodrig <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/08/20 16:20:53 by farodrig      #+#    #+#                 */
/*   Updated: 2020/08/20 16:23:39 by farodrig      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int size)
{
	int n;
	int i;
	int tab_values[size];

	n = 0;
	while (n < size)
	{
		tab_values[n] = tab[n];
		n++;
	}
	n--;
	i = 0;
	while (n >= 0)
	{
		tab[i] = tab_values[n];
		i++;
		--n;
	}
}
