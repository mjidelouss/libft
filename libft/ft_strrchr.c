/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelousse <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/01 09:36:35 by aelousse          #+#    #+#             */
/*   Updated: 2021/11/05 20:14:09 by aelousse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	*str;

	str = NULL;
	while (*(char *) s)
	{
		if ((char)*s == (char) c)
			str = (char *)s;
		s++;
	}
	if (c == 0)
		return ((char *)s);
	return (str);
}
