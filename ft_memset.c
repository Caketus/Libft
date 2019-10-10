/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkravetz <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/10 09:30:41 by mkravetz          #+#    #+#             */
/*   Updated: 2019/10/10 18:35:51 by mkravetz         ###   ########.fr       */
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

int		main(void)
{
	printf("%s", ft_memset("Yo les boiz", 5, 8));
}
