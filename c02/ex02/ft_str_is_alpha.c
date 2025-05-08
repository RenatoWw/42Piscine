/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ranhaia- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/23 13:12:06 by ranhaia-          #+#    #+#             */
/*   Updated: 2025/04/23 13:12:07 by ranhaia-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

int	ft_str_is_alpha(char *str);

int	ft_str_is_alpha(char *str)
{
	int	alpha;

	if (*str == '\0')
		return (1);
	while (*str != '\0')
	{
		if ((*str >= 'A' && *str <= 'Z') || (*str >= 'a' && *str <= 'z'))
			alpha = 1;
		else
		{
			alpha = 0;
			break ;
		}
		str++;
	}
	return (alpha);
}

/*int	main(void)
{
	char	*string = "str1ng c0m numer0";
	char	*string2 = "";
	char	*string3 = "stringALFAbetica";
	printf("string com numeros e espaços: %d\n", ft_str_is_alpha(string));
	printf("string vazia: %d\n", ft_str_is_alpha(string2));
	printf("string somente alfabética: %d\n", ft_str_is_alpha(string3));
	return (0);
}*/
