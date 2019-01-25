/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eubotnar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/25 11:08:53 by eubotnar          #+#    #+#             */
/*   Updated: 2019/01/25 11:08:53 by eubotnar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(const char *s1, const char *s2)
{
	char *s1copy;
	char *s2copy;

	if (*s2 == '\0')
		return ((char*)s1);
	while (*s1)
	{
		s1copy = (char*)s1;
		s2copy = (char*)s2;
		while (*s2copy && (*s1copy == *s2copy))
		{
			s1copy++;
			s2copy++;
		}
		if (*s2copy == '\0')
			return ((char*)s1);
		s1++;
	}
	return (0);
}
