/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eubotnar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/25 11:08:52 by eubotnar          #+#    #+#             */
/*   Updated: 2019/01/25 11:08:52 by eubotnar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strnstr(const char *s1, const char *s2, size_t max)
{
	char	*s1copy;
	char	*s2copy;
	char	*s1_begin;

	if (*s2 == 0)
		return ((char*)s1);
	s1_begin = (char*)s1;
	while ((*s1) && ((size_t)(s1 - s1_begin) < max))
	{
		s1copy = (char*)s1;
		if (*s1copy == *s2)
		{
			s2copy = (char*)s2;
			while ((*s1copy == *s2copy) && ((size_t)(s1copy - s1_begin) < max))
			{
				s1copy++;
				s2copy++;
				if (*s2copy == 0)
					return ((char*)s1);
			}
		}
		s1++;
	}
	return (NULL);
}
