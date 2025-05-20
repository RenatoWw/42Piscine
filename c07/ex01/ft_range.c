/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: renato <renato@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/12 12:29:44 by renato            #+#    #+#             */
/*   Updated: 2025/05/12 16:21:11 by renato           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	*ft_range(int min, int max)
{
	int	*arr;
	int	size;
	int	i;

	i = 0;
	size = max - min;
	if (min >= max)
		return (NULL);
	arr = (int *)malloc(sizeof(int) * (size));
	while (i < size)
	{
		arr[i] = min;
		i++;
		min++;
	}
	return (arr);
}

// int	main(void)
// {
// 	// (-2, 3) = -2, -1, 0, 1, 2, 3
// 	// (0, 5) = 0, 1, 2, 3, 4, 5
// 	// (0, -3) = 0, -1, -2, -3
// 	int	*arr1;
// 	int	*arr2;
// 	int	*arr3;
// 	arr1 = ft_range(-2, 3);
// 	arr2 = ft_range(0, 5);
// 	arr3 = ft_range(-3, 6);
// 	int	i;
// 	printf("arr 1: ");
// 	i = 0;
// 	while (i < 5)
// 	{
// 		printf("%d ", arr1[i]);
// 		i++;
// 	}
// 	printf("\narr 2: ");
// 	i = 0;
// 	while (i < 5)
// 	{
// 		printf("%d ", arr2[i]);
// 		i++;
// 	}
// 	printf("\narr 3: ");
// 	i = 0;
// 	while (i < 9)
// 	{
// 		printf("%d ", arr3[i]);
// 		i++;
// 	}
// 	printf("\n");
// 	free(arr1);
// 	free(arr2);
// 	free(arr3);
// 	return (0);
// }
