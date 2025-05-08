/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ranhaia- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/29 21:41:40 by ranhaia-          #+#    #+#             */
/*   Updated: 2025/04/29 21:41:41 by ranhaia-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	i;	
	int				ln;

	ln = len(dest);
	i = 0;
	while (i < nb && src[i] != '\0')
	{
		dest[ln + i] = src[i];
		i++;
	}
	dest[ln + i] = '\0';
	return (dest);
}
//
// #include <stdio.h>
// #include <string.h>
//
// int	main(void)
// {
// 	char	string[25] = "teste";
// 	char	cat[25] = "do cat limitado ads cat";
//
// 	// ft_strncat(cat, string, 20);
// 	// strncat(cat, string, 20);
// 	printf("%s\n", strncat(string, cat, 10));
// 	return (0);
// }
