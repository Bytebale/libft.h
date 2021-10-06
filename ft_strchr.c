/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lshonta <lshonta@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/05 19:42:06 by lshonta           #+#    #+#             */
/*   Updated: 2021/10/06 21:41:09 by lshonta          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char	*s, int	c)
{
	int	i;
	int	j;

	i = ft_strlen((char *) s);
	j = 0;
	while (j < i && *s != '\0')
	{
		if (s[j] == c)
		{
			return (&((char *) s)[j]);
		}
		j++;
	}
	if (c == '\0')
		return (&((char *) s)[j]);
	return (0);
}
// #include <stdio.h>
// #include <string.h>
// int main()
// {
// char str[] = "";
// char chr = '\0';
// printf("orig: %s\n",strchr(str, chr));
// printf("my: %s\n",ft_strchr(str, chr));
// return 0;
// }