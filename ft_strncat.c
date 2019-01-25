/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eubotnar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/25 11:08:51 by eubotnar          #+#    #+#             */
/*   Updated: 2019/01/25 11:08:51 by eubotnar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncat(char *dest, const char *src, size_t n)
{
	char *copy;

	copy = dest;
	if (n == 0)
		return (dest);
	while (*copy)
	{
		copy++;
	}
	while (*src && n > 0)
	{
		*copy = *src;
		copy++;
		src++;
		n--;
	}
	*copy = '\0';
	return (dest);
}
