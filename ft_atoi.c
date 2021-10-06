/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lshonta <lshonta@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/06 19:26:28 by lshonta           #+#    #+#             */
/*   Updated: 2021/10/06 19:47:52 by lshonta          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	int	res;
	int	sign;
	int	i;

	res = 0;
	sign = 1;
	i = 0;
	if (str[0] == '-')
	{
		sign = -1;
		i++;
	}
	if (str[0] == '+')
		i++;
	if (str[i] >= '0' && str[i] <= '9')
	{
		while (str[i] != '\0')
		{
			res = res * 10 + (str[i] - '0');
			i++;
		}
		return (sign * res);
	}
	return (0);
}
// #include <stdio.h>

// int main()
// {
// 	char str[] = "-123";
// 	printf("my: %d\n", ft_atoi(str));
// 	printf("orig: %d\n", atoi(str));
// 	return (0);
// }