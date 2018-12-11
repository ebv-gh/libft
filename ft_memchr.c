/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eubotnar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/05 15:14:52 by eubotnar          #+#    #+#             */
/*   Updated: 2018/12/11 15:58:58 by eubotnar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(void const *s, int c_in, size_t n)
{
	while (n--)
	{
		if (*(unsigned char*)s == (unsigned char)c_in)
			return ((void*)s);
		s++;
	}
	return (0);
}
