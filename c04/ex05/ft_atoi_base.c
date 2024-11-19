/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yel-mota <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/08 22:42:59 by yel-mota          #+#    #+#             */
/*   Updated: 2024/09/12 15:47:28 by yel-mota         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_sing(char *str)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (str[i] == ' ' || (str[i] >= 9 && str[i] <= 13))
	{
		i++;
	}
	while (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			j++;
		i++;
	}
	if (j % 2 == 0)
		return (1);
	else
		return (-1);
}

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

int	index_base(char s, char *base)
{
	int	i;

	i = 0;
	while (base[i] != '\0')
	{
		if (base[i] == s)
		{
			return (i);
		}
		i++;
	}
	return (-1);
}

int	valid_base(char *base)
{
	int	i;
	int	j;

	i = 0;
	while (base[i] != '\0')
	{
		j = i + 1;
		while (base[j] != '\0')
		{
			if (base[i] == base[j]
				|| (base[j] == '-' || base[j] == '+'))
			{
				return (0);
			}
			j++;
		}
		i++;
	}
	return (1);
}

int	ft_atoi_base(char *str, char *base)
{
	int	i;
	int	res;
	int	lbase;

	i = 0;
	res = 0;
	lbase = ft_strlen(base);
	if (valid_base(base))
	{
		while (str[i] != '\0')
		{
			while (str[i] >= '0' && str[i] <= '9')
			{
				res = res * lbase + index_base(str[i], base);
				i++;
			}
			i++;
		}
	}
	return (res * ft_sing(str));
}
