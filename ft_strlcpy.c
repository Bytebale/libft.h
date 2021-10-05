/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lshonta <lshonta@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/05 02:19:12 by lshonta           #+#    #+#             */
/*   Updated: 2021/10/05 03:30:14 by lshonta          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, char *src, size_t dstsize)
{
	size_t	dstlen;
	size_t	srclen;

	dstlen = ft_strlen(dst);
	srclen = ft_strlen(src);
	while (dstsize != 0)
	{
		dstlen = srclen;
		dstsize--;
	}
	return (dstlen - 1);
}
// #include <stdio.h>

// // int	main()
// // {
// // 	char	dest[] = "go hard";
// // 	char	src[] = "make ";

// // 	printf ("%s\n", dest);
// // 	printf ("%s\n", src);
// // 	printf ("%zu\n",ft_strlcpy(dest, src, 3));
// // 	return (0);
// // }