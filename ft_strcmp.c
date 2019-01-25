/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eubotnar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/25 11:08:48 by eubotnar          #+#    #+#             */
/*   Updated: 2019/01/25 11:08:48 by eubotnar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_strcmp(const char *s1, const char *s2)
{
	unsigned int	i;
	unsigned char	*s1copy;
	unsigned char	*s2copy;

	s1copy = (unsigned char *)s1;
	s2copy = (unsigned char *)s2;
	i = 0;
	while (s1copy[i] == s2copy[i] && s1copy[i] != '\0')
		i++;
	if (s1copy[i] == '\0' && s2copy[i] == '\0')
		return (0);
	else
		return (s1copy[i] - s2copy[i]);
}
