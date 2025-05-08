/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ranhaia- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/06 19:56:03 by ranhaia-          #+#    #+#             */
/*   Updated: 2025/05/06 20:12:44 by ranhaia-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_factorial(int nb)
{
	if (nb == 0 || nb == 1)
		return (1);
	else
		return (nb * (ft_recursive_factorial(nb - 1)));
}

// #include <stdio.h>

// int     main(void)
// {
//         printf("fact 1: %d\n", ft_recursive_factorial(1));
//         printf("fact 2: %d\n", ft_recursive_factorial(2));
//         printf("fact 3: %d\n", ft_recursive_factorial(3));
//         printf("fact 4: %d\n", ft_recursive_factorial(4));
//         printf("fact 5: %d\n", ft_recursive_factorial(5));
//         return (0);
// }
