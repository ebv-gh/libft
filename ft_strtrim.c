/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eubotnar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/25 11:08:53 by eubotnar          #+#    #+#             */
/*   Updated: 2019/01/25 11:08:53 by eubotnar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	space_after(char const *s)
{
	unsigned int	a;

	a = ft_strlen(s) - 1;
	while (s[a] == ' ' || s[a] == '\n' || s[a] == '\t')
	{
		a--;
	}
	return (a);
}

char		*ft_strtrim(char const *s)
{
	char			*s2;
	unsigned int	i;
	unsigned int	g;
	unsigned int	a;
	unsigned int	b;

	i = 0;
	b = 0;
	if (s == NULL)
		return (NULL);
	while (s[b] == ' ' || s[b] == '\n' || s[b] == '\t')
		b++;
	if (s[b] == '\0')
		return (s2 = ft_memalloc(sizeof(char) * 2));
	a = space_after(s);
	s2 = (char*)malloc(sizeof(char) * ((a - b) + 2));
	if (s2 == NULL)
		return (NULL);
	g = a - b;
	while (i <= g)
		s2[i++] = s[b++];
	s2[i] = '\0';
	return (s2);
}
