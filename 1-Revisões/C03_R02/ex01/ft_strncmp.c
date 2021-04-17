/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pedrhenr <pedrhenr@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/08 18:20:37 by dde-souz          #+#    #+#             */
/*   Updated: 2021/04/16 22:01:13 by pedrhenr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int c;

	c = 0;
	while (c < n)
	{
		if (s1[c] != s2[c])
		{
			return ((unsigned char)s1[c] - (unsigned char)s2[c]);
		}
		if (s1[c] == '\0' && s2[c] == '\0')
		{
			return (0);
		}
		c++;
	}
	return (0);
}
