/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eubotnar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/08 10:37:37 by eubotnar          #+#    #+#             */
/*   Updated: 2019/01/08 10:41:58 by eubotnar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s)
{
	unsigned int	start;
	int				end;

	if (s == NULL)
		return (NULL);
	end = (int)ft_strlen(s) - 1;
	start = 0;
	while ((s[start] == ' ' || s[start] == '\n' || s[start] == '\t')
			&& s[start])
		start++;
	while ((s[end] == ' ' || s[end] == '\n' || s[end] == '\t')
			&& end > (int)start)
		end--;
	return (ft_strsub(s, start, end - start + 1));
}
