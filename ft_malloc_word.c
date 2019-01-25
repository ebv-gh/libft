/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_malloc_word.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eubotnar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/25 11:08:42 by eubotnar          #+#    #+#             */
/*   Updated: 2019/01/25 11:08:42 by eubotnar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_malloc_word(char const *s, char ch)
{
	int		i;
	char	*word;

	i = 0;
	while (s[i] != ch && s[i])
	{
		i++;
	}
	word = (char *)malloc(sizeof(char) * (i + 1));
	i = 0;
	while (s[i] != ch && s[i])
	{
		word[i] = s[i];
		i++;
	}
	word[i] = '\0';
	return (word);
}
