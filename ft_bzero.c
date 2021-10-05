/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lshonta <lshonta@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/05 01:24:11 by lshonta           #+#    #+#             */
/*   Updated: 2021/10/05 02:38:00 by lshonta          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_bzero(void *s, size_t n)
{
	register char	*t;

	t = s;
	while (n != 0)
	{
		*t++ = 0;
		n--;
	}
	return (t);
}
// #include <stdio.h>

// int	main()
// {
// 	char	dest[] = "go hard";
// 	//const char	src[] = "make easily ";

// 	printf ("%s\n", dest);
// 	//printf ("%s\n", src);
// 	printf ("%s\n",ft_bzero(dest, 1));
// 	return (0);
// }