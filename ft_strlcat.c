/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkravetz <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/08 09:02:07 by mkravetz          #+#    #+#             */
/*   Updated: 2019/10/11 18:04:34 by mkravetz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	unsigned int i;
	unsigned int j;
	unsigned int sum;

	i = 0;
	j = 0;
	sum = 0;
	while (dest[i] && i < size)
		i++;
	sum += i;
	while (src[j])
		j++;
	sum += j;
	if (i == sum)
		return (sum);
	j = 0;
	while (src[j] && ((i + j) < sum - 1))
	{
		dest[i + j] = src[j];
		j++;
	}
	dest[i + j] = '\0';
	return (sum);
}
