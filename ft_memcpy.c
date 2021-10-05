/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lshonta <lshonta@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/05 01:12:01 by lshonta           #+#    #+#             */
/*   Updated: 2021/10/05 16:19:13 by lshonta          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t len)
{
	char		*tmp_dest;
	const char	*tmp_src;

	tmp_dest = (char *) dest;
	tmp_src = (const char *) src;
	while (len--)
		*tmp_dest++ = *tmp_src++;
	return (dest);
}
// #include <stdio.h>
// #include <string.h>

// int	main()
// {
// 	char	dest[] = "go hard";
// 	const char	src[] = "maly ";

// 	printf ("%s\n", dest);
// 	printf ("%s\n", src);
// 	printf ("%s\n",ft_memcpy(dest, src, sizeof(dest)));
// 	printf ("%s\n", memcpy(dest, src, sizeof(dest)));
// 	return (0);
// }