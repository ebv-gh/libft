/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eubotnar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/07 16:54:57 by eubotnar          #+#    #+#             */
/*   Updated: 2018/12/11 15:38:10 by eubotnar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	char		*phaystack;
	char		*pneedle;
	char		n;
	size_t		i;

	if (*needle == '\0')
		return ((char *)haystack);
	phaystack = (char *)haystack;
	pneedle = (char *)needle;
	n = ft_strlen(needle);
	i = 0;
	while (phaystack[i] != '\0' && (i + n) <= len)
	{
		if (ft_strncmp(haystack + i, needle, n) == 0)
			return (phaystack + i);
		i++;
	}
	return (NULL);
}
