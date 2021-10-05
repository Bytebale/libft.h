/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lshonta <lshonta@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/04 13:31:38 by lshonta           #+#    #+#             */
/*   Updated: 2021/10/05 03:21:02 by lshonta          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}
// #include <stdio.h>

// int	main()
// {
// 	char	str[] = {"aasd"};
// 	printf("%d", ft_strlen(str));
// 	return (0);
// }