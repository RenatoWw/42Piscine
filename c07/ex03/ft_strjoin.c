/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: renato <renato@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/13 14:07:37 by renato            #+#    #+#             */
/*   Updated: 2025/05/14 12:53:02 by renato           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	len;

	len = 0;
	while (str[len])
		len++;
	return (len);
}

int	ft_checklen(int size, char **strs)
{
	int	len;
	int	i;
	int	j;

	i = 0;
	len = 0;
	while (i < size)
	{
		j = 0;
		while (strs[i][j] != '\0')
		{
			len++;
			j++;
		}
		i++;
	}
	return (len);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		i;
	int		j;
	int		k;
	char	*str;
	int		len;

	if (size == 0)
		return (malloc(sizeof(char)));
	len = ft_checklen(size, strs) + (size - 1) * ft_strlen(sep) + 1;
	i = 0;
	j = 0;
	k = 0;
	str = malloc(sizeof(char) * len);
	while (i < len - 1)
	{
		if (strs[j][k] != '\0')
			str[i++] = strs[j][k++];
		if (strs[j][k] == '\0' && j++ < size - 1)
		{
			k = 0;
			while (k < ft_strlen(sep))
				str[i++] = sep[k++];
			k = 0;
		}
	}
	str[i] = '\0';
	return (str);
} // ficou com 27 linhas

// int	main(void)
// {
// 	int	size = 7;
// 	char	*strs[7] = {"oi", "eu", "me", "chamo", "renato", "test1", "test2"};
// 	char	*sep = "-|-";
// 	char	*str;
// 	str = ft_strjoin(size, strs, sep);
// 	printf("%s\n", str);
// 	free(str);
// 	return (0);
// }
