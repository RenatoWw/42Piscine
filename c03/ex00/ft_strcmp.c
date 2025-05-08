/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ranhaia- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/29 13:51:39 by ranhaia-          #+#    #+#             */
/*   Updated: 2025/04/29 13:51:39 by ranhaia-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <string.h>
// #include <stdio.h>

int	ft_strcmp(char *s1, char *s2);

int	ft_strcmp(char *s1, char *s2)
{
	while (*s1 != '\0' && *s2 != '\0')
	{
		if (*s1 != *s2)
			return (*s1 - *s2);
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}
//
// int	main(void)
// {
// 	char	*string = "oi testeeH";
// 	char	*string2 = "oi testee";
//
// 	printf("result: %d\n", strcmp(string, string2));
// 	printf("result: %d\n", ft_strcmp(string, string2));
// 	return (0);
// }
