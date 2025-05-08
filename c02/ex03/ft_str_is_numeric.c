/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ranhaia- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/23 14:11:46 by ranhaia-          #+#    #+#             */
/*   Updated: 2025/04/23 14:11:47 by ranhaia-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

int	ft_str_is_numeric(char *str);

int	ft_str_is_numeric(char *str)
{
	int	num;

	if (*str == '\0')
		return (1);
	while (*str != '\0')
	{
		if (*str >= '0' && *str <= '9')
			num = 1;
		else
			return (0);
		str++;
	}
	return (num);
}
/*int	main(void)
{
	char	*string = "0123a4Abc";
	char	*string2 = "";
	char	*string3 = "012345";

	printf("string com caracteres e números: %d\n", ft_str_is_numeric(string));
	printf("string vazia: %d\n", ft_str_is_numeric(string2));
	printf("string só com números: %d\n", ft_str_is_numeric(string3));
	return (0);
}*/
