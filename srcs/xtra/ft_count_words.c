/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_count_words.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eubotnar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/09 12:34:06 by eubotnar          #+#    #+#             */
/*   Updated: 2019/01/09 12:34:07 by eubotnar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_count_words(char const *s, char ch)
{
	int words;

	words = 0;
	while (*s)
	{
		if (*s != ch)
		{
			words++;
			while (*s != ch && *s)
				s++;
		}
		s++;
	}
	return (words);
}
