/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_boolean.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: renato <renato@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/14 13:03:54 by renato            #+#    #+#             */
/*   Updated: 2025/05/17 13:30:22 by renato           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char *str);
typedef int	t_bool;
#define TRUE 1
#define FALSE 0
#define EVEN_MSG "I have an even number of arguments\n"
#define ODD_MSG "I have an odd number of arguments\n"
#define EVEN(nbr) ((nbr % 2 == 0))
#define SUCCESS 1
