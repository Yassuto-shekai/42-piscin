/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yel-mota <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/16 15:47:21 by yel-mota          #+#    #+#             */
/*   Updated: 2024/09/16 18:02:41 by yel-mota         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	m;

	m = 0;
	while (str[m] != '\0')
	{
		m++;
	}
	return (m);
}

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	j;

	i = ft_strlen(dest);
	j = 0;
	while (src[j] != '\0')
	{
		dest[i] = src[j];
		j++;
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

int	ft_lentotal(int size, char **str, char *str1)
{
	int	total;
	int	i;

	total = 0;
	i = 0;
	while (i < size)
	{
		total = total + ft_strlen(str[i]);
		i++;
	}
	total = total + ft_strlen(str1) * (size - 1) + 1;
	return (total);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*dest;
	int		i;

	i = 0;
	if (size == 0)
	{
		dest = (char *)malloc(sizeof(char));
		dest[i] = '\0';
		return (dest);
	}
	dest = (char *)malloc(sizeof(char) * ft_lentotal(size, strs, sep));
	if (dest == NULL)
		return (NULL);
	*dest = '\0';
	while (i < size)
	{
		ft_strcat(dest, strs[i]);
		if (i < size - 1)
			ft_strcat(dest, sep);
		i++;
	}
	return (dest);
}
