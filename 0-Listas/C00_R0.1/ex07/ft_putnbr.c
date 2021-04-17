/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pedrhenr <pedrhenr@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/12 16:57:44 by pedrhenr          #+#    #+#             */
/*   Updated: 2021/04/14 12:25:06 by pedrhenr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_reverse(char *s_nb)
{
	int		j;

	j = 5;
	while (j >= 0)
	{
		write(1, &s_nb[j], 1);
		j--;
	}
}

int		ft_write(char c_nb)
{
	char	s_nb[5];
	int		i;
	int		j;

	i = 0;
	j = 0;
	while (i <= 9)
	{
		if ((i + '0') == c_nb)
		{
			write(1, &c_nb, 1);
			s_nb[j] = c_nb - '0';
			return (s_nb[j]);
			j++;
		}
		i++;
	}
	return (0);
}

void	ft_putnbr(int nb)
{
	char 	s_nb[5];
	int 	j;
	j = 0;
	while ((nb % 10) != 0)
	{
		s_nb[j] = ft_write(nb % 10 + '0');
		nb /= 10;
		j++;
	}
	write(1, "\n", 1);
	ft_print_reverse(s_nb);
}

