/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yel-mota <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/09 04:12:20 by yel-mota          #+#    #+#             */
/*   Updated: 2024/09/15 13:09:32 by yel-mota         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime(int nb)
{
	int	i;
	int	half;

	half = nb / 2;
	i = 2;
	if (nb <= 1)
		return (0);
	while (half >= i)
	{
		if (nb % i == 0)
			return (0);
		i++;
	}
	return (1);
}
