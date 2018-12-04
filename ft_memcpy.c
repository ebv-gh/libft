/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eubotnar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/04 12:16:57 by eubotnar          #+#    #+#             */
/*   Updated: 2018/12/04 14:41:08 by eubotnar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

/* 'restrict" keyword limits the effect of pointer aliasing. */
/* The if statemet avoids entering the loop if n == 0. Improves speed a bit.*/

void	*ft_memcpy(void *restrict dst, const void *restrict src, size_t n)
{
	unsigned char *d;
	unsigned char *s;

	d = (unsigned char*)dst;
	s = (unsigned char*)src;
	if (n == 0 || dst == src)
		return (dst);

	while (n--)
	{
		d[n] = s[n];
	}
	return (dst);
}
