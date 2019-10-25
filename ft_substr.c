/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkravetz <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/25 17:10:02 by mkravetz          #+#    #+#             */
/*   Updated: 2019/10/25 17:28:53 by mkravetz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	unsigned int	x;
	char			*sub;

	x = 0;
	if ((sub = (char*)malloc(sizeof(char) * (len + 1))) == NULL)
		return (NULL);
	if (s == NULL)
		return (NULL);
	if (!(start > ft_strlen(s)))
	{
		while (x < len && s[start + x])
		{
			sub[x] = s[start + x];
			x++;
		}
	}
	sub[x] = '\0';
	return (sub);
}
