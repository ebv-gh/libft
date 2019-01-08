/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eubotnar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/08 10:47:54 by eubotnar          #+#    #+#             */
/*   Updated: 2019/01/08 10:52:44 by eubotnar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	**ft_strsplit(char const *s, char c)
{
	char	**array;
	int		words;
	int		iforarray;

	if (!s)
		return (NULL);
	words = ft_count_words(s, c);
	array = (char **)malloc(sizeof(char*) * (words + 1));
	if (!array)
		return (NULL);
	iforarray = 0;
	while (*s)
	{
		if (*s == c && *s)
			s++;
		else
		{
			array[iforarray] = ft_malloc_word(s, c);
			iforarray++;
			while (*s != c && *s)
				s++;
		}
	}
	array[iforarray] = 0;
	return (array);
}
