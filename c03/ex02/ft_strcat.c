/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ranhaia- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/29 20:26:30 by ranhaia-          #+#    #+#             */
/*   Updated: 2025/04/29 20:26:31 by ranhaia-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

int	len(char *src)
{
	int	len;

	len = 0;
	while (*src != '\0')
	{
		src++;
		len++;
	}
	return (len);
}

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	ln;

	ln = len(dest);
	i = 0;
	while (src[i] != '\0')
	{
		dest[ln + i] = src[i];
		i++;
	}
	dest[ln + i] = '\0';
	return (dest);
}
//
// int	main(void)
// {
// 	char	string[24] = "teste ";
// 	char	cat[24] = "do cat";
//
// 	printf("ft_strcat: %s\n", ft_strcat(string, cat));
// 	printf("strcat: %s\n", strcat(string, cat));
// 	return (0);
// }
