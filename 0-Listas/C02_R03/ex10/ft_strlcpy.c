/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pedrhenr <pedrhenr@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/13 22:00:42 by mabramov          #+#    #+#             */
/*   Updated: 2021/04/16 16:24:30 by pedrhenr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int cont;
	unsigned int source_size;

	source_size = 0;
	while (src[source_size] != '\0')
	{
		++source_size;
	}
	if (size > 0)
	{
		cont = 0;
		while (src[cont] != '\0' && cont < (size - 1))
		{
			dest[cont] = src[cont];
			++cont;
		}
		dest[cont] = '\0';
	}
	return (source_size);
}
