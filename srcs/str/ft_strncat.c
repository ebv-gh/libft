/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eubotnar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/07 15:26:44 by eubotnar          #+#    #+#             */
/*   Updated: 2018/12/07 15:31:59 by eubotnar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncat(char *dst, const char *src, size_t n)
{
	int		i;
	int		dlen;
	int		slen;

	dlen = ft_strlen(dst);
	slen = ft_strlen((char*)src);
	i = 0;
	while ((dlen <= (dlen + slen)) && ((int)n > 0))
	{
		dst[dlen] = src[i];
		dlen++;
		slen++;
		i++;
		n--;
	}
	dst[dlen] = '\0';
	return (dst);
}
