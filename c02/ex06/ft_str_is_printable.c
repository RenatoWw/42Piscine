/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ranhaia- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/23 20:55:46 by ranhaia-          #+#    #+#             */
/*   Updated: 2025/04/23 20:55:47 by ranhaia-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_printable(char *str);

int	ft_str_is_printable(char *str)
{
	while (*str != '\0')
	{
		if (!(*str >= 32 && *str <= 126))
			return (0);
		str++;
	}
	return (1);
}
// int	main(void)
// {
// 	char	*string = " as{}~`[[]~saqwe xz q";
// 	char	*string2 = "";
// 	char	*string3 = "\n\taa\t´´çasd\0";
// 	printf("teste1: %d\n", ft_str_is_printable(string));
// 	printf("teste2: %d\n", ft_str_is_printable(string2));
// 	printf("teste3: %d\n", ft_str_is_printable(string3));
// 	return (0);
// }
