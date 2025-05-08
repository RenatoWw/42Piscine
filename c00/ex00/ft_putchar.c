/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ranhaia- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/14 20:31:24 by ranhaia-          #+#    #+#             */
/*   Updated: 2025/04/16 19:56:35 by ranhaia-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>
#include <stdio.h>

void	ft_putchar();

void	ft_putchar()
{
	write(1, "B", 1);
}

int	main(void)
{
	char frase[64] = "teste string c hahaha";
	char* frase2 = "teste dois string c";

	printf("%c", *(frase2+1));
	return (0);
}
