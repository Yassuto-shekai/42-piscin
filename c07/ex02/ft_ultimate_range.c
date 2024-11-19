/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yel-mota <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/12 14:49:12 by yel-mota          #+#    #+#             */
/*   Updated: 2024/09/16 20:20:59 by yel-mota         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int ft_ultimate_range(int **range, int min, int max)
{
	int	*dest;
	int	i;
	int	size;

	i = 0;
	size = max - min;
	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	dest = malloc((size) * sizeof(int));
	if (dest == NULL)
		return (-1);
    i = 0;
	while (i < size)
	{
		dest[i] = min + i;
		i++;
	}
	*range = dest;
	return (size);
}
