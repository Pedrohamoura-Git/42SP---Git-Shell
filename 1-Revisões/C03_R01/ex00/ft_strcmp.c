/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pedrhenr <pedrhenr@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/15 14:42:45 by pedrhenr          #+#    #+#             */
/*   Updated: 2021/04/15 16:34:13 by pedrhenr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_strcmp(char *s1, char *s2)
{
	int	idx;

	idx = 0;
	while ((s1[idx] != '\0' && s2[idx] != '\0') && s1[idx] == s2[idx])
		idx++;
	if (s1[idx] == s2[idx])
		return (0);
	else
		return ((unsigned char)s1[idx] - (unsigned char)s2[idx]);
}
