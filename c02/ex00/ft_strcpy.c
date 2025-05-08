/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ranhaia- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/22 13:54:04 by ranhaia-          #+#    #+#             */
/*   Updated: 2025/04/22 13:54:06 by ranhaia-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

char	*ft_strcpy(char *dest, char *src);

char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
// int	main(void)
// {
// 	char	*string = "hahaha";
// 	char	string2[7];
// 	printf("%p %p\n", &string, &string2);
// 	printf("%s\n", ft_strcpy(string2, string));
// 	printf("%p %p\n", &string, &string2);
// 	printf("%s %s\n", string2, string);
// }
