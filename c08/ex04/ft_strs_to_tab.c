/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: renato <renato@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/18 13:59:53 by renato            #+#    #+#             */
/*   Updated: 2025/05/18 15:12:24 by renato           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stock_str.h"

int	ft_strlen(char *str)
{
	int	len;

	len = 0;
	while (str[len])
		len++;
	return (len);
}

void	ft_putstr(char *str)
{
	while (*str)
		write(1, str++, 1);
}

struct s_stock_str	*ft_strs_to_tab(int ac, char **av)
{
	int			i;
	t_stock_str	*stock;

	stock = malloc(sizeof(t_stock_str) * (ac + 1));
	if (!stock)
		return (NULL);
	i = 0;
	while (i < ac)
	{
		stock[i].size = ft_strlen(av[i]);
		stock[i].str = av[i];
		stock[i].copy = stock[i].str;
		i++;
	}
	stock[i].str = NULL;
	return (stock);
}

void	ft_putnbr(int num)
{
	char	string[12];
	int		i;

	i = 0;
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

void	ft_show_tab(struct s_stock_str *par)
{
	int	i;

	i = 0;
	while (par[i].str != NULL)
	{
		ft_putstr(par[i].str);
		write(1, "\n", 1);
		ft_putnbr(par[i].size);
		write(1, "\n", 1);
		ft_putstr(par[i].copy);
		write(1, "\n", 1);
		i++;
	}
}

int	main(void)
{
	t_stock_str	*stocks;
	char		*av[5] = {"teste", "oi", "quarentaedois", "renato", "string"};

	stocks = ft_strs_to_tab(4, av);
	ft_show_tab(stocks);
	free(stocks);
	return (0);
}
