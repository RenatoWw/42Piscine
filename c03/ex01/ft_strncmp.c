/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ranhaia- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/29 14:22:11 by ranhaia-          #+#    #+#             */
/*   Updated: 2025/04/29 14:22:12 by ranhaia-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <string.h>
// #include <stdio.h>
int	ft_strncmp(char *s1, char *s2, unsigned int n);

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (i < n)
	{
		if (s1[i] != s2[i] || s1[i] == '\0')
			return (s1[i] - s2[i]);
		i++;
	}
	return (0);
}
// int	main(void)
// {
// 	char	*string = "abcd";
// 	char	*string2 = "abcG";
//
// 	printf("result: %d\n", ft_strncmp(string, string2, 3));
// 	printf("result: %d\n", ft_strncmp(string, string2, 4));
// 	// printf("result: %d\n", strncmp(string, string2, 13));
// 	return (0);
// }
