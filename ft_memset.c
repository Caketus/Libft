/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkravetz <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/10 09:30:41 by mkravetz          #+#    #+#             */
/*   Updated: 2019/10/11 18:20:58 by mkravetz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

void	*ft_memset(void *b, int c, size_t len)
{
	unsigned char	unsig_char_c;

	unsig_char_c = (unsigned char)c;
	while (len > 0)
	{
		((unsigned char *)b)[len] = unsig_char_c;
		len--;
	}
	return (b);
}
