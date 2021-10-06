/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lshonta <lshonta@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/06 18:30:09 by lshonta           #+#    #+#             */
/*   Updated: 2021/10/06 19:23:25 by lshonta          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;

	if (needle[0] == '\0')
		return ((char *) haystack);
	j = 0;
	while (j < len && haystack[j])
	{
		i = 0;
		while (needle[i] && haystack[j] && needle[i] == haystack[j])
		{
			i++;
			j++;
		}
		if (needle[i] == '\0')
			return ((char *) &haystack[j - i]);
		j = j - i + 1;
	}
	return (0);
}
// #include <stdio.h>
// #include <string.h>	

// int main()
// {
// 	const char w1[] = "bas Bad bar";
// 	const char w2[] = "Bad bar";

// 	printf("my: %s\n", ft_strnstr(w1, w2, sizeof(w1)));
// 	printf("orig: %s\n", strnstr(w1, w2, sizeof(w1)));
// 	return(0);
// }