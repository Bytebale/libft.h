/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lshonta <lshonta@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/05 01:12:01 by lshonta           #+#    #+#             */
/*   Updated: 2021/10/06 22:25:40 by lshonta          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t len)
{
	char		*tmp_dest;
	const char	*tmp_src;

	tmp_dest = (char *) dest;
	tmp_src = (const char *) src;
	if (*tmp_dest != '\0' && *tmp_src != '\0' && len != '\0')
	{
		while (len--)
			*tmp_dest++ = *tmp_src++;
		return (dest);
	}
	return (0);
}
// #include <stdio.h>
// #include <string.h>

// int	main()
// {
// 	char	dest[] = "go hard";
// 	const char	src[] = "maly ";

// 	printf ("%s\n", dest);
// 	printf ("%s\n", src);
// 	printf ("my: %s\n",ft_memcpy(dest, src, sizeof(dest)));
// 	printf ("original: %s\n", memcpy(dest, src, sizeof(dest)));
// 	return (0);
// }