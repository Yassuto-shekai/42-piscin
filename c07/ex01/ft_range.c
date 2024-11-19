/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yel-mota <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/12 10:57:19 by yel-mota          #+#    #+#             */
/*   Updated: 2024/09/16 13:26:12 by yel-mota         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	*rang;
	int	i;
	int	size;

	i = 0;
	size = max - min;
	if (min >= max)
		return (NULL);
	rang = (int *)malloc((size) * sizeof(int));
	if (rang == NULL)
		return (NULL);
	while (i < size)
	{
		rang[i] = min;
		min++;
		i++;
	}
	return (rang);
}
