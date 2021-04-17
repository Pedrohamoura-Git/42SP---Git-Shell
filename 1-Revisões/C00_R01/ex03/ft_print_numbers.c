/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pedrhenr <pedrhenr@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/09 15:02:28 by pedrhenr          #+#    #+#             */
/*   Updated: 2021/04/09 15:34:47 by pedrhenr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_numbers(void)
{
	int digitos;

	digitos = 0;
	while (digitos++ < 9)
	{
		digitos += '0';
		write(1, &digitos, 1);
		digitos -= '0';
	}
}
