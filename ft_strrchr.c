/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lshonta <lshonta@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/05 18:02:44 by lshonta           #+#    #+#             */
/*   Updated: 2021/10/05 19:43:03 by lshonta          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int	i;
	int	k;
	int	j;

	i = ft_strlen((char *) s);
	j = i - 1;
	while (j >= 0)
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
		j--;
	}
	return (0);
}
// #include <stdio.h>
// #include<string.h>
// int main()
// {
// char str[] = "saymer";
// char chr = 'y', *chpos;
// printf("orig: %s\n",strrchr(str, chr));
// printf("my: %s\n",ft_strrchr(str, chr));
// return 0;
// }