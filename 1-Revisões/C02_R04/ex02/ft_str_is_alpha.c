/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pedrhenr <pedrhenr@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/14 14:37:54 by pedrhenr          #+#    #+#             */
/*   Updated: 2021/04/14 18:04:36 by pedrhenr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_str_is_alpha(char *str)
{
	int		idx;

	idx = 0;
	while (str[idx] != '\0')
	{
		if ((str[idx] >= 'a' && str[idx] <= 'z') ||
		(str[idx] >= 'A' && str[idx] <= 'Z'))
			idx++;
		else
			return (0);
	}
	return (1);
}
