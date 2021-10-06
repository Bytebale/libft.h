/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lshonta <lshonta@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/06 17:19:57 by lshonta           #+#    #+#             */
/*   Updated: 2021/10/06 17:35:22 by lshonta          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		if (*((char *) s + i) == c)
			return ((char *) s + i);
		i++;
	}
	return (0);
}
// #include <stdio.h>
// #include <string.h>

// int	main()
// {
// 	char	s[] = "qwerty";

// 	printf("my: %s\n", ft_memchr((void *)s, 'e', sizeof(s)));
// 	printf("orig: %s\n", memchr((void *)s, 'e', sizeof(s)));
// 	return (0);
// }