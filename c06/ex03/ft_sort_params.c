/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yel-mota <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/19 01:15:03 by yel-mota          #+#    #+#             */
/*   Updated: 2024/09/19 01:15:49 by yel-mota         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_cmp(char *s, char *z)
{
	unsigned int	k;

	k = 0;
	while (s[k] && z[k])
	{
		if (s[k] != z[k])
			return (s[k] - z[k]);
		k++;
	}
	return (s[k] - z[k]);
}

int	main(int ac, char **av)
{
	int		j;
	int		i;
	char	*swap;

	i = 1;
	while (i < ac - 1)
	{
		if (ft_cmp(av[i], av[i + 1]) > 0)
		{
			swap = av[i];
			av[i] = av[i + 1];
			av[i + 1] = swap;
			i = 0;
		}
		i++;
	}
	i = 1;
	while (i < ac)
	{
		j = 0;
		while (av[i][j])
			write(1, &av[i][j++], 1);
		write(1, "\n", 1);
		i++;
	}
}
