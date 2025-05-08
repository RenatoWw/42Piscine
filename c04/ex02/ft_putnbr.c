/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ranhaia- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/01 13:05:22 by ranhaia-          #+#    #+#             */
/*   Updated: 2025/05/01 13:05:23 by ranhaia-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	int_min(long int *nb)
{
	if (*nb == -2147483648)
	{
		write(1, "-2147483648", 11);
		return (1);
	}
	if (*nb == 0)
	{
		write(1, "0", 1);
		return (1);
	}
	return (0);
}

void	ft_putnbr(int nb)
{
	char	string[20];
	int		i;
	long	num;

	num = nb;
	i = 0;
	if (int_min(&num) != 1)
	{
		if (num < 0)
		{
			write(1, "-", 1);
			num *= -1;
		}
		while (num > 0)
		{
			string[i] = (num % 10) + '0';
			num /= 10;
			i++;
		}
		string[i] = '\0';
		i -= 1;
		while (i >= 0)
			write(1, &string[i--], 1);
	}
}
//
// int	main(void)
// {	
// 	ft_putnbr(-5332);
// 	write(1, "\n", 1);
// 	ft_putnbr(0);
// 	write(1, "\n", 1);
// 	ft_putnbr(2147483647);
// 	write(1, "\n", 1);
// 	ft_putnbr(-2147483648);
// 	write(1, "\n", 1);
// 	return (0);
// }
