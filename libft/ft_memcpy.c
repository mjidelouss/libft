/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelousse <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/01 09:37:40 by aelousse          #+#    #+#             */
/*   Updated: 2021/11/06 12:51:20 by aelousse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	char	*sr;
	char	*de;

	sr = (char *)src;
	de = (char *)dst;
	if ((src == dst) || n == 0)
		return (dst);
	while (n > 0)
	{
		*de++ = *sr++;
		n--;
	}
	return (dst);
}
