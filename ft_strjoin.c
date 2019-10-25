/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkravetz <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/25 17:32:27 by mkravetz          #+#    #+#             */
/*   Updated: 2019/10/25 17:56:18 by mkravetz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*concated;

	concated = ft_strcpy(concated, s1);
	if (s1 == NULL && s2 == NULL)
		return (NULL);
	if ((concated = (char*)malloc(sizeof(char)
					* (ft_strlen(s1) + ft_strlen(s2) + 1))) == NULL)
		return (NULL);
	return (ft_strcat(joined, s2));
}
