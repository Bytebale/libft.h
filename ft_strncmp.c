/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lshonta <lshonta@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/05 20:44:17 by lshonta           #+#    #+#             */
/*   Updated: 2021/10/06 21:01:26 by lshonta          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	unsigned int	i;

	i = 0;
	while (s1[i] != '\0' && s2[i] != '\0' && i < n)
	{
		if (s1[i] < s2[i])
			return (-1);
		else if (s1[i] > s2[i])
			return (1);
		i++;
	}
	if (s1[i] == '\0' && s2[i] != '\0')
		return (-1);
	else if (s1[i] != '\0' && s2[i] == '\0')
		return (1);
	return (0);
}
// #include <stdio.h>
// #include <string.h>	

// int main()
// {
// 	const char w1[] = "asd";
// 	const char w2[] = "asefg";

// 	printf("my: %d\n", ft_strncmp(w1, w2, sizeof(w2)));
// 	printf("orig: %d\n", strncmp(w1, w2, sizeof(w2)));
// 	return(0);
// }