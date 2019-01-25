/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eubotnar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/25 11:08:43 by eubotnar          #+#    #+#             */
/*   Updated: 2019/01/25 11:08:43 by eubotnar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *to, const void *from, int ch, size_t numbytes)
{
	unsigned char *to2;
	unsigned char *from2;

	to2 = (unsigned char*)to;
	from2 = (unsigned char*)from;
	while (numbytes > 0)
	{
		if (*from2 == (unsigned char)ch && numbytes > 0)
		{
			*to2++ = *from2++;
			return (to2);
		}
		else
		{
			*to2++ = *from2++;
			numbytes--;
		}
	}
	return (NULL);
}
