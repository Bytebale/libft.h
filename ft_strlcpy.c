/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lshonta <lshonta@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/05 02:19:12 by lshonta           #+#    #+#             */
/*   Updated: 2021/10/06 22:58:52 by lshonta          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	unsigned int	i;
	size_t			s;

	s = ft_strlen((char *) src);
	i = 0;
	if (dstsize == 0)
		return (s);
	while (i < dstsize - 1)
	{
		if (s > dstsize)
			break ;
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
// 	char	dest[15] = "";
// 	const char	src[] = "lorem";	
// 	printf ("my: %zu\n",ft_strlcpy(dest, src, 15));
// 	printf ("%s\n", dest);
// 	printf ("orig: %zu\n", strlcpy (dest, src, 15));
// 	printf ("%s\n", dest);
// 	// printf ("%s\n", src);
// 	return (0);
// }