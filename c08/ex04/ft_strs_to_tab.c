/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yel-mota <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/18 19:43:37 by yel-mota          #+#    #+#             */
/*   Updated: 2024/09/18 21:43:45 by yel-mota         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_stock_str.h"

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

struct	s_stock_str	*ft_strs_to_tab(int ac, char **av)
{
	int			i;
	t_stock_str	*dest;

	dest = malloc(sizeof(t_stock_str) * (ac + 1));
	if (dest == NULL)
		return (NULL);
	i = 0;
	while (i < ac)
	{
		dest[i].size = ft_strlen(av[i]);
		dest[i].str = av[i];
		dest[i].copy = ft_strdup(av[i]);
		i++;
	}
	dest[i].str = NULL;
	return (dest);
}
