/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ranhaia- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/23 20:47:41 by ranhaia-          #+#    #+#             */
/*   Updated: 2025/04/23 20:47:46 by ranhaia-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_uppercase(char *str);

int	ft_str_is_uppercase(char *str)
{
	while (*str != '\0')
	{
		if (!(*str >= 'A' && *str <= 'Z'))
			return (0);
		str++;
	}
	return (1);
}
// int	main(void)
// {
// 	char	*string = "acbsasdijoasd";
// 	char	*string2 = "";
// 	char	*string3 = "ASDHASUDH";
//
// 	printf("minusculos: %d\n", ft_str_is_uppercase(string));
// 	printf("string vazia: %d\n", ft_str_is_uppercase(string2));
// 	printf("maisculos: %d\n", ft_str_is_uppercase(string3));
// 	return (0);
// }
