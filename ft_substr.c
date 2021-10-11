/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lshonta <lshonta@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/11 16:51:42 by lshonta           #+#    #+#             */
/*   Updated: 2021/10/11 17:02:47 by lshonta          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*tmp;
	size_t	i;

	if (!s)
		return (NULL);
	if ((size_t)start > ft_strlen((char *) s))
		return (ft_strdup(""));
	tmp = malloc(sizeof(char) * (len + 1));
	i = 0;
	if (!tmp)
		return (0);
	while (i < len)
	{
		tmp[i] = *(s + start + i);
		i++;
	}
	tmp[i] = '\0';
	return (tmp);
}
// #include <string.h>
// #include <stdio.h>

// int main()
// {
// 	char const s[] = "sdfghjkl";
// 	unsigned int start = 5;

// 	printf("%s\n", ft_substr(s, start, sizeof(s)));
// 	return (0);
// }