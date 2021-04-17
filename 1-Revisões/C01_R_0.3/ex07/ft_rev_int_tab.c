/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pedrhenr <pedrhenr@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/13 13:41:48 by pedrhenr          #+#    #+#             */
/*   Updated: 2021/04/13 15:29:42 by pedrhenr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int size)
{
	int aux[size];
	int idx;
	int size_temp;

	idx = 0;
	size_temp = size;
	while (--size_temp >= 0)
	{
		aux[size_temp] = tab[idx];
		idx++;
	}
	idx = 0;
	while (idx < size)
	{
		tab[idx] = aux[idx];
		idx++;
	}
}
