/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eubotnar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/25 11:08:40 by eubotnar          #+#    #+#             */
/*   Updated: 2019/01/25 11:08:40 by eubotnar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_itoa(int n)
{
	int		len;
	char	*str;

	len = ft_count(n);
	str = ft_strnew(len);
	if (!str)
		return (NULL);
	if (n == 0)
		str[0] = '0';
	if (n < 0)
	{
		str[0] = '-';
		if (n == -2147483648)
		{
			str[--len] = '8';
			n = n / 10;
		}
		n = n * (-1);
	}
	while (n != 0 && len >= 0)
	{
		str[--len] = n % 10 + 48;
		n = n / 10;
	}
	return (str);
}
