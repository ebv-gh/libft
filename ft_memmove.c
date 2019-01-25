/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eubotnar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/25 11:08:44 by eubotnar          #+#    #+#             */
/*   Updated: 2019/01/25 11:08:44 by eubotnar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *to, const void *from, size_t numbytes)
{
	unsigned int	i;
	unsigned char	*to2;
	unsigned char	*from2;

	i = 0;
	to2 = (unsigned char *)to;
	from2 = (unsigned char *)from;
	if (from2 < to2)
	{
		while (numbytes-- > 0)
		{
			to2[numbytes] = from2[numbytes];
		}
	}
	else
	{
		while (numbytes > i)
		{
			to2[i] = from2[i];
			i++;
		}
	}
	return (to);
}
