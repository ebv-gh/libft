/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eubotnar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/07 16:54:57 by eubotnar          #+#    #+#             */
/*   Updated: 2018/12/14 14:02:32 by eubotnar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystk, const char *ndl, size_t n)
{
	char		*phaystk;
	char		*pndl;
	char		z;
	size_t		i;

	if (*ndl == '\0')
		return ((char *)haystk);
	phaystk = (char *)haystk;
	pndl = (char *)ndl;
	z = ft_strlen(ndl);
	i = 0;
	while (phaystk[i] != '\0' && (i + z) <= n)
	{
		if (ft_strncmp(haystk + i, ndl, z) == 0)
			return (phaystk + i);
		i++;
	}
	return (NULL);
}
