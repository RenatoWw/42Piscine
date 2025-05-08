/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ranhaia- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/01 18:03:44 by ranhaia-          #+#    #+#             */
/*   Updated: 2025/05/01 18:03:45 by ranhaia-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_atoi(char *str)
{
	int	num;
	int	signal;

	num = 0;
	signal = 0;
	while (*str == ' ' || (*str >= 9 && *str <= 13))
		str++;
	while (*str == '-' || *str == '+')
	{
		if (*str == '-')
			signal += 1;
		str++;
	}	
	while (*str >= '0' && *str <= '9')
	{
		num *= 10;
		num += *str - '0';
		str++;
	}
	if (signal % 2 != 0)
		return (-num);
	return (num);
}

// #include <stdio.h>
// #include <stdlib.h>

// int	main(void)
// {
// 	char	*str = "21474";
// 	int num = ft_atoi(str);
// 	int numatoi = atoi(str);

// 	printf("%d\n", num);
// 	printf("%d\n", numatoi);
// 	return(0);
// }
