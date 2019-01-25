/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eubotnar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/25 11:08:44 by eubotnar          #+#    #+#             */
/*   Updated: 2019/01/25 11:08:44 by eubotnar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *to, const void *from, size_t numbytes)
{
	char *to2;
	char *from2;

	to2 = (char*)to;
	from2 = (char*)from;
	while (numbytes > 0)
	{
		*to2 = *from2;
		to2++;
		from2++;
		numbytes--;
	}
	return (to);
}
