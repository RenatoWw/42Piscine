/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ranhaia- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/24 17:58:51 by ranhaia-          #+#    #+#             */
/*   Updated: 2025/04/24 17:58:51 by ranhaia-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <unistd.h>
// #include <stdio.h>

int	is_alpha(char c)
{
	if ((c >= 'a' && c <= 'z')
		|| (c >= '0' && c <= '9')
		|| (c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);
}

char	*ft_strcapitalize(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (i == 0 || is_alpha(str[i - 1]) == 0)
		{
			if (str[i] >= 'a' && str[i] <= 'z')
				str[i] -= 32;
		}
		else if (is_alpha(str[i]) == 1)
		{
			if (str[i] >= 'A' && str[i] <= 'Z')
				str[i] += 32;
		}
		i++;
	}
	return (str);
}
// int	main(void)
// {
// 	char	string[60] = "oi, tUdo bem?";
// 	ft_strcapitalize(string);
// 	printf("%s", string);
// 	return (0);
// }
