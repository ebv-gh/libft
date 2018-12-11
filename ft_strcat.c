/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eubotnar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/07 15:08:14 by eubotnar          #+#    #+#             */
/*   Updated: 2018/12/11 14:42:46 by eubotnar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strcat(char *dst, const char *src)
{
	int		i;
	int		dlen;
	int		slen;

	dlen = (int)ft_strlen(dst);
	slen = (int)ft_strlen((char*)src);
	i = 0;
	while (dlen <= (dlen + slen))
	{
		dst[dlen] = src[i];
		dlen++;
		slen--;
		i++;
	}
	dst[dlen] = '\0';
	return (dst);
}
