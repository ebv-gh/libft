/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eubotnar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/07 15:33:32 by eubotnar          #+#    #+#             */
/*   Updated: 2018/12/07 15:42:33 by eubotnar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char * dst, const char * src, size_t dstsize)
{
	char		*dp;
	const char	*sp;
	size_t		n;
	size_t		dlen;

	dp = dst;
	sp = src;
	n = dstsize;
	while (n-- != 0 && *dp != '\0')
		dp++;
	dlen = dp - dst;
	n = dstsize - dlen;
	if (n == 0)
		return (dlen + strlen(sp));
	while (*src)
	{
		if (n != 0)
		{
			*dst++ = *src;
			n--;
		}
		src++;
	}
	*dst = '\0';
	return (dlen + (src - sp));
}
