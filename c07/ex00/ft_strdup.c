/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yel-mota <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/10 14:50:37 by yel-mota          #+#    #+#             */
/*   Updated: 2024/09/16 13:40:34 by yel-mota         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

char	*ft_strcpy(char *dest, char *src)
{
	int	m;

	m = 0;
	while (src[m] != '\0')
	{
		dest[m] = src[m];
		m++;
	}
	dest[m] = '\0';
	return (dest);
}

char	*ft_strdup(char *src)
{
	char	*str1;

	if (src == '\0')
		return (NULL);
	str1 = (char *)malloc(sizeof(char) * ft_strlen(src));
	if (str1 == NULL)
		return (NULL);
	ft_strcpy(str1, src);
	return (str1);
}
