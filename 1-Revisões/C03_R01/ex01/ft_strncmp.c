/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pedrhenr <pedrhenr@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/15 16:35:56 by pedrhenr          #+#    #+#             */
/*   Updated: 2021/04/16 16:53:45 by pedrhenr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	idx;

	idx = 0;
	while ((s1 != '\0' && s2 != '\0') && s1[idx] == s2[idx])
	{
		if (idx <= n)
			idx++;
		else
			break ;
	}
	if (s1[idx] == s2[idx])
		return (0);
	else
		return ((unsigned char)s1[idx] - (unsigned char)s2[idx]);
}
