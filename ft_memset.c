/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lshonta <lshonta@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/05 00:42:46 by lshonta           #+#    #+#             */
/*   Updated: 2021/10/05 16:36:52 by lshonta          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *dest, int c, size_t len)
{
	char	*tmp;

	if (dest != NULL)
	{
		tmp = (char *)dest;
		while (len--)
			*tmp++ = c;
	}
	return (dest);
}
// #include <stdio.h>
// #include <string.h>

// int	main()
// {
// 	char	str[] = "go hard";

// 	printf ("%s\n", str);
// 	printf ("my: %s\n",ft_memset(str, '*', 3));
// 	printf ("original: %s\n",memset(str, '*', 3));
// 	return (0);
// }