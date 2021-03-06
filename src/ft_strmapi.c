/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lambrozi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/04 11:16:09 by lambrozi          #+#    #+#             */
/*   Updated: 2020/02/11 22:08:31 by lambrozi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Applies the function ’f’ to each character of the string ’s’ to
** create a new string resulting from successive applications of ’f’.
*/

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	int		i;
	char	*str;

	if (!s)
		return (NULL);
	str = (char *)malloc((ft_strlen((char *)s) + 1) * sizeof(char));
	if (str)
	{
		i = -1;
		while (s[++i])
			str[i] = f(i, (char)s[i]);
		str[i] = '\0';
		return (str);
	}
	return (NULL);
}
