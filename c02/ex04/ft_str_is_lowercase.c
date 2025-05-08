/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ranhaia- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/23 14:11:46 by ranhaia-          #+#    #+#             */
/*   Updated: 2025/04/23 20:47:01 by ranhaia-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

int	ft_str_is_lowercase(char *str);

int	ft_str_is_lowercase(char *str)
{
	while (*str != '\0')
	{
		if (!(*str >= 'a' && *str <= 'z'))
			return (0);
		str++;
	}
	return (1);
}
// int	main(void)
// {
// 	char	*string = "acbsasdijoasd";
// 	char	*string2 = "";
// 	char	*string3 = "asiasjcIAOSJDoascjoas";
//
// 	printf("minusculos: %d\n", ft_str_is_lowercase(string));
// 	printf("string vazia: %d\n", ft_str_is_lowercase(string2));
// 	printf("maisculos: %d\n", ft_str_is_lowercase(string3));
// 	return (0);
// }
