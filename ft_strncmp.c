/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkravetz <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/07 08:59:34 by mkravetz          #+#    #+#             */
/*   Updated: 2019/10/17 20:29:44 by mkravetz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	x;
	int				res;

	x = 0;
	res = 0;
	if (n == 0)
		return (0);
	while ((s1[x] != '\0') && (s2[x] != '\0')
			&& (s1[x] == s2[x]) && (n - 1 - x))
		x++;
	return ((unsigned char)s1[x] - (unsigned char)s2[x]);
}
