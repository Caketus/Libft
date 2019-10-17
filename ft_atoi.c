/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkravetz <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/07 10:37:07 by mkravetz          #+#    #+#             */
/*   Updated: 2019/10/15 20:39:01 by mkravetz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
** Faire une fonction pre check qui gere les ispace et le symb pour gagner des 
** lignes. If pas negative, regarder si c'est min int, si pos, max int.
** En gros commencer a partir du while str[x]>= 0 && str[x] <= 9 
*/

#include "libft.h"
#define MIN_INT -2147483648
#define MAX_INT 2147483647

int		ft_atoi(const char *str)
{
	int			x;
	int			symb;
	long		nb;

	x = 0;
	symb = 1;
	nb = 0;
	while (str[x] == '\t' || str[x] == '\v' || str[x] == '\n'
			|| str[x] == '\r' || str[x] == '\f' || str[x] == ' ')
		x++;
	if (str[x] == '+' || str[x] == '-')
	{
		if (str[x] == '-')
			symb = symb * (-1);
		x++;
	}
	while (str[x] >= '0' && str[x] <= '9')
	{
		nb = (nb * 10) + str[x] - 48;
		x++;
	}
	return (str[x] == ('-' | '+') ? (0) : (nb * symb));
}
