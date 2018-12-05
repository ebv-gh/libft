/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eubotnar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/05 12:13:32 by eubotnar          #+#    #+#             */
/*   Updated: 2018/12/05 15:11:34 by eubotnar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

/* What memmove() actually does is copy the bytes from src to dest, and it
 * copies forward if dest < src (which is essentially the same thing as memcpy),
 * and backwards otherwise.*/
/* find out if have to add 1 to len in else */

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char *d;
	unsigned char *s;
	
	d = (unsigned char*)dst;
	s = (unsigned char*)src;
	if (d < s)
	{
		while (len--)
			*d++ = *s++;
	}
	else
	{
		d += len;
		s += len;
		while (len--)
			*d-- = *s--;
	}
	return (dst);
}
