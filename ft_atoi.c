/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkravetz <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/07 10:37:07 by mkravetz          #+#    #+#             */
/*   Updated: 2019/10/17 19:00:21 by mkravetz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** It handles long long overflows like the actual atoi.
*/

#include "libft.h"
#define MIN_SUPERLONG 9223372036854775808
#define MAX_SUPERLONG 9223372036854775807

int		ft_isspace_and_pos_neg(const char *str, int *symb)
{
	int						x;
	unsigned long long		nb;

	x = 0;
	*symb = 1;
	nb = 0;
	while (str[x] == '\t' || str[x] == '\v' || str[x] == '\n'
			|| str[x] == '\r' || str[x] == '\f' || str[x] == ' ')
		x++;
	if (str[x] == '+' || str[x] == '-')
	{
		if (str[x] == '-')
			*symb = *symb * (-1);
		x++;
	}
	return (x);
}

int		ft_atoi(const char *str)
{
	int						x;
	unsigned long long		nb;
	int						symb;

	nb = 0;
	x = ft_isspace_and_pos_neg(str, &symb);
	while (str[x] >= '0' && str[x] <= '9')
	{
		nb = (nb * 10) + str[x] - 48;
		x++;
	}
	if ((nb > MAX_SUPERLONG) && (symb == 1))
		return (-1);
	if ((nb > MIN_SUPERLONG) && (symb == -1))
		return (0);
	return (str[x] == ('-' | '+') ? (0) : (nb * symb));
}
