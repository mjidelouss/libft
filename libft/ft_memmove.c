/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelousse <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/01 09:39:42 by aelousse          #+#    #+#             */
/*   Updated: 2021/11/07 12:55:16 by aelousse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t n)
{
	if (dst > src)
	{
		while (n--)
			*((char *)(dst + n)) = *((char *)(src + n));
	}
	else
		ft_memcpy(dst, src, n);
	return (dst);
}
