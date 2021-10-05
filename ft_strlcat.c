/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lshonta <lshonta@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/05 03:31:28 by lshonta           #+#    #+#             */
/*   Updated: 2021/10/05 03:50:03 by lshonta          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, char *src, size_t dstsize)
{
	size_t	dstlen;
	size_t	srclen;

	dstlen = ft_strlen(dst);
	dstsize -= dstlen + 1;
	if (!dstsize)
		return (dstlen);
	srclen = ft_strlen(src);
	if (srclen > dstsize)
		srclen = dstsize;
	return (dstlen + srclen);
}
// #include <stdio.h>

// int	main()
// {
// 	char	dest[] = "go hard";
// 	char	src[] = "make ad ";

// 	printf ("%s\n", dest);
// 	printf ("%s\n", src);
// 	printf ("%zu\n",ft_strlcat(dest, src, 1));
// 	return (0);
// }