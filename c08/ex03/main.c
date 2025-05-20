/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: renato <renato@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/18 13:45:49 by renato            #+#    #+#             */
/*   Updated: 2025/05/18 13:47:02 by renato           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_point.h"
#include <stdio.h>

void set_point(t_point *point)
{
	point->x = 39;
	point->y = 26;
}

int main(void)
{
	t_point point;
	set_point(&point);
	printf("x: %d y: %d\n", point.x, point.y);
	return (0);
}
