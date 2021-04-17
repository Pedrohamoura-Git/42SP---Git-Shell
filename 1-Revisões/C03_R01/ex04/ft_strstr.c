/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pedrhenr <pedrhenr@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/15 17:32:44 by pedrhenr          #+#    #+#             */
/*   Updated: 2021/04/15 23:58:01 by pedrhenr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int j;

	i = 0;
	j = 0;
	if (to_find[0] == '\0')
		return (str);
	else
	{
		while (str[i] != '\0')
		{
			while (str[i + j] == to_find[j])
			{
				j++;
				if (to_find[j] == '\0')
					return (&str[i]);
				else
					continue;
			}
			i++;
		}
	}
	return (0);
}
