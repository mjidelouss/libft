/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelousse <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/02 14:58:43 by aelousse          #+#    #+#             */
/*   Updated: 2021/11/14 19:12:39 by aelousse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

static size_t	ft_total(char const *s, char c)
{
	size_t	t;

	t = 0;
	while (*s)
	{
		if (*s != c)
		{
			t++;
			while (*s && *s != c)
				s++;
		}
		else
			s++;
	}
	return (t);
}

char	**ft_split(char const *s, char c)
{
	char	*start;
	size_t	i;
	size_t	len;
	char	**str;

	i = 0;
	if (!s)
		return (NULL);
	str = (char **)malloc(sizeof(char **) * (ft_total(s, c) + 1));
	if (!str)
		return (0);
	while (*s)
	{
		if (*s == c)
			s++;
		start = (char *)s;
		len = 0;
		while (s[len] && s[len] != c)
			len++;
		s += len;
		if (*(s - 1) != c)
			str[i++] = ft_substr(start, 0, len);
	}
	str[i] = NULL;
	return (str);
}
