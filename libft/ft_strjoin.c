/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelousse <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/02 14:58:14 by aelousse          #+#    #+#             */
/*   Updated: 2021/11/08 12:06:07 by aelousse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

static void	ft_strcat(char const *dest, char const *src, char *str)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (dest[i] != '\0')
	{
		str[i] = dest[i];
		i++;
	}
	while (src[j] != '\0')
	{
		str[i + j] = src[j];
		j++;
	}
	str[i + j] = '\0';
}

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*str;
	size_t	total;

	if (!s1 || !s2)
		return (0);
	total = ft_strlen(s1) + ft_strlen(s2);
	str = (char *)malloc(sizeof(char) * (total + 1));
	if (!str)
		return (NULL);
	ft_strcat(s1, s2, str);
	return (str);
}
