/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eubotnar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/25 11:08:47 by eubotnar          #+#    #+#             */
/*   Updated: 2019/01/25 11:08:47 by eubotnar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strcat(char *dest, const char *src)
{
	char *copy;

	copy = dest;
	while (*copy)
	{
		copy++;
	}
	while (*src)
	{
		*copy = *src;
		copy++;
		src++;
	}
	*copy = '\0';
	return (dest);
}
