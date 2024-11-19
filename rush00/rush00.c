/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yel-mota <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/01 15:07:10 by yel-mota          #+#    #+#             */
/*   Updated: 2024/09/01 17:23:30 by yel-mota         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

void	print_exes(int x, char edge, char middle)
{
	int	j;

	j = 0;
	while (j < x)
	{
		if (j == 0 || j == x - 1)
			ft_putchar(edge);
		else
			ft_putchar(middle);
		j++;
	}
}

void	rush(int x, int y)
{
	int	i;

    if (x <= 0 || y <= 0)
        return (0);
	i = 0;
	while (i < y)
	{
		if (i == 0 || i == y - 1)
			print_exes(x, 'o', '-');
		else
			print_exes(x, '|', ' ');
		ft_putchar('\n');
		i++;
	}
}
