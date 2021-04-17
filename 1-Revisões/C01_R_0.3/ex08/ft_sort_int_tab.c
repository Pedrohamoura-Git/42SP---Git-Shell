/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pedrhenr <pedrhenr@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/13 15:31:27 by pedrhenr          #+#    #+#             */
/*   Updated: 2021/04/13 17:26:35 by pedrhenr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void		ft_sort_int_tab(int *tab, int size)
{
	int aux;
	int idx;

	idx = 0;
	while (idx < size)
	{
		if (idx > 0 && tab[idx - 1] > tab[idx])
		{
			aux = tab[idx - 1];
			tab[idx - 1] = tab[idx];
			tab[idx] = aux;
			idx = 0;
		}
		idx++;
	}
}
