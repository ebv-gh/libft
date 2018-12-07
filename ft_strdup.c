/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eubotnar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/05 18:44:43 by eubotnar          #+#    #+#             */
/*   Updated: 2018/12/05 18:56:52 by eubotnar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdlib.h>
#include "libft.h"

char	*ft_strdup(const char *s1)
{
	size_t len = ft_strlen(s) + 1;
	void *new = malloc (len);

	if (new == NULL)
		return NULL;
	return ((char*) ft_memcpy(new, s, len));
}

char	*ft_strndup(const char *s1, size_t n);
