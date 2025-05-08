/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ranhaia- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/07 14:56:37 by ranhaia-          #+#    #+#             */
/*   Updated: 2025/05/07 14:56:38 by ranhaia-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime(int nb)
{
	int	i;

	i = 2;
	if (nb <= 1)
		return (0);
	while (i < nb)
	{
		if (nb % i == 0)
			return (0);
		i++;
	}
	return (1);
}

// #include <stdio.h>

// int	main(void)
// {
// 	printf("num: %d, is prime: %d\n", 10, ft_is_prime(10));
// 	printf("num: %d, is prime: %d\n", 2, ft_is_prime(2));
// 	printf("num: %d, is prime: %d\n", 17, ft_is_prime(17));
// 	printf("num: %d, is prime: %d\n", 52, ft_is_prime(52));
// 	printf("num: %d, is prime: %d\n", 71, ft_is_prime(71));
// 	return (0);
// }
