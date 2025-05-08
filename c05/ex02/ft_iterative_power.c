/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ranhaia- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/06 20:17:02 by ranhaia-          #+#    #+#             */
/*   Updated: 2025/05/06 20:17:04 by ranhaia-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int	result;

	result = 1;
	if (power < 0)
		return (0);
	if ((nb == 0 && power == 0) || power == 0)
		return (1);
	while (power > 0)
	{
		result *= nb;
		power--;
	}
	return (result);
}

// #include <stdio.h>

// int	main(void)
// {
// 	printf("num: %d, power: %d, result: %d\n", 2, 5, ft_iterative_power(2, 5));
// 	printf("num: %d, power: %d, result: %d\n", 3, 2, ft_iterative_power(3, 2));
// 	printf("num: %d, power: %d, result: %d\n", 5, 2, ft_iterative_power(5, 5));
// 	printf("num: %d, power: %d, result: %d\n", 5, 5, ft_iterative_power(0, 0));
// 	printf("num: %d, power: %d, result: %d\n", 5, 5, ft_iterative_power(0, -5));
// 	return (0);
// }
