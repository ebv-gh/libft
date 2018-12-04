/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eubotnar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/03 13:57:06 by eubotnar          #+#    #+#             */
/*   Updated: 2018/12/03 17:20:47 by eubotnar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>

void	ft_bzero(void *s, size_t n)
{
	ft_memset(s, 0, n);
}
//void	ft_bzero(void *s, size_t n)
//{
//	unsigned char *ptr;
//
//	ptr = (unsigned char*)s;
//	while (n > 0)
//	{
//		*ptr = '\0';
//		ptr++;
//		n--;
//	}
//}
