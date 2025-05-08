/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ranhaia- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/06 14:52:14 by ranhaia-          #+#    #+#             */
/*   Updated: 2025/05/06 14:52:18 by ranhaia-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	factorial;

	if (nb == 0)
		return (1);
	factorial = 1;
	while (nb > 0)
	{
		factorial *= nb;
		nb--;
	}
	return (factorial);
}

// #include <stdio.h>

// int     main(void)
// {
//         printf("fact 1: %d\n", ft_iterative_factorial(1));
//         printf("fact 2: %d\n", ft_iterative_factorial(2));
//         printf("fact 3: %d\n", ft_iterative_factorial(3));
//         printf("fact 4: %d\n", ft_iterative_factorial(4));
//         printf("fact 5: %d\n", ft_iterative_factorial(5));
//         return (0);
// }
