/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pedrhenr <pedrhenr@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/14 19:37:38 by pedrhenr          #+#    #+#             */
/*   Updated: 2021/04/15 12:05:25 by pedrhenr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcapitalize(char *str)
{
	int	idx;

	idx = 0;
	while (str[idx] != '\0')
	{
		if (str[idx] >= 'A' && str[idx] <= 'Z')
			str[idx] += 32;
		if ((str[idx] >= 'a' && str[idx] <= 'z') &&
		(str[idx - 1] < '0' || str[idx - 1] > '9') &&
		(str[idx - 1] < 'A' || str[idx - 1] > 'Z') &&
		(str[idx - 1] < 'a' || str[idx - 1] > 'z'))
		{
			str[idx] -= 32;
		}
		idx++;
	}
	return (str);
}
