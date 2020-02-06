/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lambrozi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/25 15:35:46 by lambrozi          #+#    #+#             */
/*   Updated: 2020/02/06 18:05:07 by lambrozi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include "libft.h"
#include <string.h>
#include <unistd.h>

size_t			ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t len;

	if (!src)
		return (0);
	len = 0;
	while (len + 1 < dstsize && *(src + len))
	{
		*(dst + len) = *(src + len);
		len++;
	}
	if (dstsize != 0)
		*(dst + len) = '\0';
	while (*(src + len))
		len++;
	return (len);
}


int main(void)
{
    char str1[20] = "arroz e feijao";
    char str2[20] = "temperos diversos";
    int r;

    r = ft_strlcpy(str1, str2, 5);
	write(1, str1, 20);
    return (0);
}
