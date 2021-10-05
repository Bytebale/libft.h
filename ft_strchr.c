/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lshonta <lshonta@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/05 19:42:06 by lshonta           #+#    #+#             */
/*   Updated: 2021/10/05 19:52:43 by lshonta          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char	*s, int	c)
{
	int	i;
	int	k;
	int	j;

	i = ft_strlen((char *) s);
	j = 0;
	while (j < i)
	{
		if (s[j] == c)
		{
			k = j;
			while (k < i)
			{
				return (&((char *) s)[k]);
				k++;
			}
			return (0);
		}
		j++;
	}
	return (0);
}
// #include <stdio.h>
// #include <string.h>
// int main()
// {
// char str[] = "DayDreamer";
// char chr = 'D';
// printf("orig: %s\n",strchr(str, chr));
// printf("my: %s\n",ft_strchr(str, chr));
// return 0;
// }