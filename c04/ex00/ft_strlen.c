/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ranhaia- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/01 12:59:24 by ranhaia-          #+#    #+#             */
/*   Updated: 2025/05/01 12:59:25 by ranhaia-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int	len;

	len = 0;
	while (str[len])
		len++;
	return (len);
}
//
// #include <stdio.h>
//
// int	main(void)
// {
// 	char	*str = "teste12345";
// 	printf("%d", ft_strlen(str));
// 	return (0);
// }
