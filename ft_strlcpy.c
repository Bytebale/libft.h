/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lshonta <lshonta@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/05 02:19:12 by lshonta           #+#    #+#             */
/*   Updated: 2021/10/06 14:57:51 by lshonta          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	unsigned int	i;
	size_t			s;

	s = ft_strlen((char *) src);
	i = 0;
	while (i < dstsize - 1)
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = 0;
	return (s);
}
// #include <stdio.h>
// #include <string.h>
// int	main()
// {
// 	char	dest[5];
// 	const char	*src = "go hard";

// 	// printf ("%s\n", dest);
// 	printf ("%s\n", src);
// 	printf ("my: %zu\n",ft_strlcpy(dest, src, sizeof(dest)));
// 	printf("my res: %s\n", dest);
// 	printf ("orig: %zu\n", strlcpy (dest, src,sizeof(dest)));
// 	printf("orig res: %s\n", dest);
// 	return (0);
// }