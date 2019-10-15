/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkravetz <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/11 19:46:01 by mkravetz          #+#    #+#             */
/*   Updated: 2019/10/14 16:37:43 by mkravetz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	size_t			x;
	char			*ptr1;
	const char		*ptr2;

	ptr1 = dst;
	ptr2 = src;
	x = -1;
	if (dst == 0 && src == 0)
		return (0);
	while (++x < n)
	{
		*(ptr1 + x) = *(ptr2 + x);
		if (ptr1[x] == c)
			return (ptr1 + x + 1);
	}
	return (dst);
}
