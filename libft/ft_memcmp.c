/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelousse <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/01 09:40:19 by aelousse          #+#    #+#             */
/*   Updated: 2021/11/05 21:48:49 by aelousse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t	i;
	char	*a;
	char	*b;

	a = (char *)s1;
	b = (char *)s2;
	i = 0;
	while (i < n)
	{
		if (a[i] == b[i])
			i++;
		else
			return ((unsigned char)a[i] - (unsigned char)b[i]);
	}
	return (0);
}
