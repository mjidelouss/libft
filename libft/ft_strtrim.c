/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelousse <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/08 15:33:59 by aelousse          #+#    #+#             */
/*   Updated: 2021/11/13 19:27:56 by aelousse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

static int	ft_in_radar(char c, char const *set)
{
	size_t	i;

	i = 0;
	while (set[i])
	{
		if (set[i] == c)
			return (1);
		i++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*trim;
	size_t	start;
	size_t	finish;
	size_t	i;

	start = 0;
	if (!s1)
		return (0);
	if (!set)
		return (ft_strdup(s1));
	finish = ft_strlen(s1);
	while (s1[start] && ft_in_radar(s1[start], set))
		start++;
	while (start < finish && ft_in_radar(s1[finish - 1], set))
		finish--;
	i = 0;
	trim = (char *) malloc(sizeof(char) * (finish - start + 1));
	if (!trim)
		return (NULL);
	while (start < finish)
		trim[i++] = s1[start++];
	trim[i] = '\0';
	return (trim);
}
