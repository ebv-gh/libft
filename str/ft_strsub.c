/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eubotnar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/08 10:44:19 by eubotnar          #+#    #+#             */
/*   Updated: 2019/01/08 10:45:49 by eubotnar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	char	*res;
	int		i;

	if (NULL != (res = ft_strnew(len)) && s != NULL)
	{
		i = 0;
		while (s[start] && len--)
			res[i++] = s[start++];
		if (res != NULL)
			return (res);
	}
	return (NULL);
}
