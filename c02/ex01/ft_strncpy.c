/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yel-mota <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/05 09:45:34 by yel-mota          #+#    #+#             */
/*   Updated: 2024/09/07 11:49:37 by yel-mota         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	m;

	m = 0;
	while (src[m] != '\0' && m < n)
	{
		dest[m] = src[m];
		m++;
	}
	while (n > m)
	{
		dest[m] = '\0';
		m++;
	}
	return (dest);
}
