/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eubotnar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/25 11:08:51 by eubotnar          #+#    #+#             */
/*   Updated: 2019/01/25 11:08:51 by eubotnar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_strncmp(const char *s1, const char *s2, size_t max)
{
	size_t			i;
	unsigned char	*s1copy;
	unsigned char	*s2copy;

	s1copy = (unsigned char *)s1;
	s2copy = (unsigned char *)s2;
	i = 0;
	while (s1copy[i] && (s1copy[i] == s2copy[i]) && max > i)
	{
		i++;
	}
	if (i == max)
		return (0);
	else
		return (s1copy[i] - s2copy[i]);
}
