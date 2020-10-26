/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_sort_int_tab.c                                  :+:    :+:            */
/*                                                     +:+                    */
/*   By: farodrig <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/08/20 18:40:29 by farodrig      #+#    #+#                 */
/*   Updated: 2020/08/20 18:40:35 by farodrig      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

void	ft_sort_int_tab(int *tab, int size)
{
	int n;
	int i;
	int swap;

	n = 0;
	i = 0;
	while (n < size)
	{
		while (i < size - n)
		{
			if (tab[i + 1] < tab[i])
			{
				swap = tab[i];
				tab[i] = tab[i + 1];
				tab[i + 1] = swap;
			}
			i++;
		}
		i = 0;
		n++;
	}
}
