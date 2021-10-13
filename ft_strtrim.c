/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gribovvladimir <gribovvladimir@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/11 18:01:34 by lshonta           #+#    #+#             */
/*   Updated: 2021/10/13 16:02:49 by gribovvladi      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	is_set(char c, const char *set)
{
	while (*set)
		if (c == *set++)
			return (0);
	return (1);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	start;
	size_t	end;
	char	*tmp;

	tmp = NULL;
	if (!s1)
		return (NULL);
	if (!set)
		return (ft_strdup(s1));
	start = 0;
	end = ft_strlen((char *) s1);
	while (is_set(s1[start], set) == 0)
		start++;
	if (start == ft_strlen((char *) s1))
	{
		if (!(tmp == ft_strdup("")))
			return (NULL);
		else
			return (tmp);
	}
	while (is_set(s1[end - 1], set) == 0)
		end--;
	tmp = ft_substr(s1, start, end - start);
	return (tmp);
}
