/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ranhaia- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/06 20:37:59 by ranhaia-          #+#    #+#             */
/*   Updated: 2025/05/06 20:38:02 by ranhaia-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_power(int nb, int power)
{
	if (power == 0)
		return (1);
	if (power < 0)
		return (0);
	return (nb * ft_recursive_power(nb, power - 1));
}

// #include <stdio.h>

// int	main(void)
// {
// 	printf("num: %d, power: %d, result: %d\n", 2, 5, ft_recursive_power(2, 5));
// 	printf("num: %d, power: %d, result: %d\n", 3, 2, ft_recursive_power(3, 2));
// 	printf("num: %d, power: %d, result: %d\n", 5, 2, ft_recursive_power(5, 5));
// 	printf("num: %d, power: %d, result: %d\n", 5, 5, ft_recursive_power(0, 0));
// 	printf("num: %d, power: %d, result: %d\n", 5, 5, ft_recursive_power(0, -5));
// 	return (0);
// }
