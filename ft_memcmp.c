/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eubotnar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/05 15:34:21 by eubotnar          #+#    #+#             */
/*   Updated: 2018/12/11 13:28:43 by eubotnar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_memcmp(const void* lhs, const void* rhs, size_t count)
{
	unsigned char uc1;
	unsigned char uc2;

	while (count--)
	{
		uc1 = * (unsigned char *)lhs;
		uc2 = * (unsigned char *)rhs;
		if (uc1 != uc2)
			return (uc1 - uc2);
		lhs++;
		rhs++;
	}
	return (0);
}
