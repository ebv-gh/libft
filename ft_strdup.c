/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eubotnar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/05 18:44:43 by eubotnar          #+#    #+#             */
/*   Updated: 2018/12/07 13:02:24 by eubotnar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *str)
{
	size_t		len
	void		*new

	len = ft_strlen(str);
	new = (char*)malloc((len + 1) * sizeof(*str));
	if (new == NULL)
		return (NULL);
	return ((char*)ft_memcpy(new, str, len));
}
