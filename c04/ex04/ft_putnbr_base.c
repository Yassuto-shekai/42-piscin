/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yel-mota <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/08 13:15:02 by yel-mota          #+#    #+#             */
/*   Updated: 2024/09/14 19:42:14 by yel-mota         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_puchar(char a)
{
	write(1, &a, 1);
}

int	ft_valid_base(char *base)
{
	int	i;
	int	j;

	i = 0;
	while (base[i] != '\0')
	{
		j = i + 1;
		while (base[j] != '\0')
		{
			if (base[i] == base[j])
				return (0);
			j++;
		}
		if (base[i] == '-' || base[i] == '+')
			return (0);
		i++;
	}
	if (i < 2)
		return (0);
	return (1);
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

void	ft_putnbr_base(int nbr, char *base)
{
	unsigned int	basel;
	unsigned int	num;

	basel = ft_strlen(base);
	num = nbr;
	if (ft_valid_base(base))
	{
		if (nbr < 0)
		{
			ft_puchar('-');
			num *= -1;
		}
		if (num < basel)
		{
			ft_puchar(base[num]);
		}
		else
		{
			ft_putnbr_base(num / basel, base);
			ft_putnbr_base(num % basel, base);
		}
	}
}
