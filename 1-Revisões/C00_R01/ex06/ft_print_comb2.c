/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pedrhenr <pedrhenr@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/11 12:12:52 by pedrhenr          #+#    #+#             */
/*   Updated: 2021/04/12 16:03:46 by pedrhenr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_write(char n)
{
	write(1, &n, 1);
}

void	ft_check_number(int n)
{
	if (n >= 10)
	{
		ft_write(n / 10 + '0');
		ft_write(n % 10 + '0');
	}
	else
	{
		ft_write('0');
		ft_write(n + '0');
	}
}

void	ft_print_comb2(void)
{
	int n1;
	int n2;

	n1 = 0;
	while (n1 <= 98)
	{
		n2 = n1;
		while (n2 <= 99)
		{
			if (n1 != n2)
			{
				ft_check_number(n1);
				ft_write(' ');
				ft_check_number(n2);
				if (n1 < 98)
				{
					ft_write(',');
					ft_write(' ');
				}
			}
			n2++;
		}
		n1++;
	}
}
