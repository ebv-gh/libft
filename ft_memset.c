/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eubotnar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/25 11:08:44 by eubotnar          #+#    #+#             */
/*   Updated: 2019/01/25 11:08:44 by eubotnar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *str, int value, size_t numbytes)
{
	char *str2;

	str2 = (char*)str;
	while (numbytes > 0)
	{
		*str2 = (char)value;
		str2++;
		numbytes--;
	}
	return (str);
}
