/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sss.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yel-mota <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/04 10:55:08 by yel-mota          #+#    #+#             */
/*   Updated: 2024/09/05 21:41:45 by yel-mota         ###   ########.fr       */
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
	int	j;
	int	*x;
	int	*y;

	i = 0;
	while (i < size)
	{
		j = i + 1;
		while (j < size)
		{
			if (tab[j] > tab[i])
			{
				x = &tab[i];
				y = &tab[j];
				ft_swap(x, y);
			}
			j++;
		}
		i++;
	}
}
