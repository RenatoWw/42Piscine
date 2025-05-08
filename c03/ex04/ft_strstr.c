/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ranhaia- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/29 21:52:04 by ranhaia-          #+#    #+#             */
/*   Updated: 2025/04/30 17:58:17 by ranhaia-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	len(char *str)
{
	int	len;

	len = 0;
	while (str[len] != '\0')
		len++;
	return (len);
}

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	j;
	int	ln;

	i = 0;
	ln = len(to_find);
	if (ln == 0)
		return (str);
	while (str[i] != '\0')
	{
		j = 0;
		while (to_find[j] != '\0')
		{
			if (to_find[j] != str[i + j])
				break ;
			j++;
			if (j == ln)
				return (&str[i]);
		}
		i++;
	}
	return (0);
}
//
// #include <stdio.h>
//
// int	main(void)
// {
// 	char	*haystack = "reproduzir teste";
// 	char	*needle = "duzir";
//
// 	printf("%s\n", ft_strstr(haystack, needle));
// 	return (0);
// }
