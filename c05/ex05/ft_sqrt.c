/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ranhaia- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/06 21:39:27 by ranhaia-          #+#    #+#             */
/*   Updated: 2025/05/06 21:39:28 by ranhaia-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_sqrt(int nb)
{
	int	sub;
	int	sqrt;

	sub = 1;
	sqrt = 0;
	if (nb <= 0)
		return (0);
	while (nb > 0)
	{
		nb -= sub;
		sub += 2;
		sqrt++;
	}
	if (nb == 0)
		return (sqrt);
	return (0);
}

// int	main(void)
// {
// 	printf("sqrt of %d is %d\n", 67, ft_sqrt(67));
// 	printf("sqrt of %d is %d\n", 25, ft_sqrt(25));
// 	printf("sqrt of %d is %d\n", 5, ft_sqrt(5));
// 	printf("sqrt of %d is %d\n", 49, ft_sqrt(49));
// 	return (0);
// }
