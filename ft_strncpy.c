/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eubotnar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/07 14:00:57 by eubotnar          #+#    #+#             */
/*   Updated: 2018/12/07 14:15:12 by eubotnar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncpy(char *dst, const char *src, size_t n)
{
	size_t		strlen;
	size_t		i;

	if (!dst || !src)
		return (NULL);
	strlen = ft_strlen((char*)src);
	i=0;
	while (i < n)
	{
		if (i > strlen)
			dst[i] = '\0';
		else
			dst[i] = src[i];
		i++;
	}
	return (dst);
}
