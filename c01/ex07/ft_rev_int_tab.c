/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yel-mota <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/04 09:48:35 by yel-mota          #+#    #+#             */
/*   Updated: 2024/09/04 11:05:31 by yel-mota         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_swap(int *x, int *y)
{
	int	swap;

	swap = *x;
	*x = *y;
	*y = swap;
}

void	ft_rev_int_tab(int *tab, int size)
{
	int	i;
	int	*x;
	int	*y;

	i = 0;
	while (i < size)
	{
		x = &tab[i];
		y = &tab[size - 1];
		ft_swap(x, y);
		i++;
		size--;
	}
}
