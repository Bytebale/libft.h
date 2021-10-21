/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lshonta <lshonta@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/06 19:26:28 by lshonta           #+#    #+#             */
/*   Updated: 2021/10/21 17:13:20 by lshonta          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*ft_ispace(const char *str)		/* проверяем пробелы, переносы строк, табуляцию*/
{
	while (((*str == ' ') || (*str == '\t') || (*str == '\n')
			|| (*str == '\v') || (*str == '\f') || (*str == '\r')))
		str++;
	return ((char *)str);
}

int	ft_atoi(const char *str)					/* функция принимает строку символов и преводит ее к типу int определяя при этом знак (+/-) */
{
	int			sign;
	long int	n;
	long int	tmp;

	n = 0;
	sign = 1;
	str = ft_ispace(str);						/* пропускаем  пробелы в строке */
	if (*str == '-')							/* определяем знак*/
	{
		sign = -1;
		str++;
	}
	else if (*str == '+')		
		str++;
	while (*str >= '0' && *str <= '9')			/* вывод цифр */
	{
		tmp = n;
		n = n * 10 + sign * (*str - '0');
		if (sign == 1 && tmp > n)				/* если больше INT_MAX вывод  INT_MAX*/
			return (-1);
		else if (sign == -1 && tmp < n)			/* если меньше INT_MIN вывод  INT_MIN*/
			return (0);
		str++;
	}
	return (n);
}
// #include <stdio.h>

// int main()
// {
// 	char str[] = "-13489298374";
// 	printf("my: %d\n", ft_atoi(str));
// 	printf("CC: %d\n", atoi(str));
// 	return (0);
// }
