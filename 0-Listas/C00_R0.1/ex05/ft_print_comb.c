/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pedrhenr <pedrhenr@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/11 13:43:03 by pedrhenr          #+#    #+#             */
/*   Updated: 2021/04/11 20:21:45 by pedrhenr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_write(char c)
{
	write(1, &c, 1);
}

void	ft_commas(void)
{
	write(1, ", ", 2);
}

void	ft_print_comb(void)
{
	int n[3];

	n[0] = 0;
	while (n[0] <= 9)
	{
		n[1] = n[0] + 1;
		while (n[1] <= 9)
		{
			n[2] = n[1] + 1;
			while (n[2] <= 9)
			{
				ft_write(n[0] + '0');
				ft_write(n[1] + '0');
				ft_write(n[2] + '0');
				if (n[0] != 7)
					ft_commas();
				n[2]++;
			}
			n[1]++;
		}
		n[0]++;
	}
}
