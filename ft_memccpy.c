/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eubotnar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/04 14:45:52 by eubotnar          #+#    #+#             */
/*   Updated: 2018/12/04 15:55:57 by eubotnar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

void
	*ft_memccpy(void *restrict dst, const void *restrict src, int c, size_t n)
{
	unsigned char *d;
	unsigned char *s;

	d = (unsigned char*)dst;
	s = (unsigned char*)src;
	if (n == 0 || dst == src)
		return (dst);

	while (n--)
	{
		*d = *s;
		if (*s == (unsigned char)c)
			return (dst++);
		d++;
		s++;
	}
	return (0);
}
