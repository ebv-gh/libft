/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_count_words.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: uamirov <uamirov@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/06 12:19:27 by uamirov           #+#    #+#             */
/*   Updated: 2018/12/11 01:22:43 by uamirov          ###   ########.fr       */
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
