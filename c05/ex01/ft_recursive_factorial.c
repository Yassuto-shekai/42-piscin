/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yel-mota <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/09 00:05:11 by yel-mota          #+#    #+#             */
/*   Updated: 2024/09/15 12:57:03 by yel-mota         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_factorial(int nb)
{
	int	res;

	res = 1;
	if (nb > 0)
	{
		res = res * nb * ft_recursive_factorial(nb - 1);
	}
	else if (nb == 0)
	{
		return (res);
	}
	else
		return (0);
	return (res);
}
