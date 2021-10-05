/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lshonta <lshonta@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/05 00:42:46 by lshonta           #+#    #+#             */
/*   Updated: 2021/10/05 01:11:14 by lshonta          ###   ########.fr       */
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

// int	main()
// {
// 	char	str[] = "go hard";

// 	printf ("%s\n", str);
// 	printf ("%s\n",ft_memset(str, '*', 3));
// 	return (0);
// }