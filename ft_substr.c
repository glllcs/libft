/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lambrozi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/24 22:18:12 by lambrozi          #+#    #+#             */
/*   Updated: 2020/02/06 18:56:19 by lambrozi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*str;
	size_t	i;

	if (!s)
		return (NULL);
	i = 0;
	if (NULL != (str = (char *)malloc(sizeof(char) * (len + 1))))
	{
		while (len > 0)
		{
			*(str + i) = *(s + start);
			start++;
			i++;
			len--;
		}
		*(str + i) = '\0';
		return (str);
	}
	return (NULL);
}
