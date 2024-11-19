/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yel-mota <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/05 15:09:05 by yel-mota          #+#    #+#             */
/*   Updated: 2024/09/07 17:42:34 by yel-mota         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	m;
	unsigned int	i;

	i = 0;
	while (src[i] != '\0')
	{
		i++;
	}
	m = 0;
	if (size != 0)
	{
		while (src[m] != '\0' && m < size - 1)
		{
			dest[m] = src[m];
			m++;
		}
		dest[m] = '\0';
	}
	return (i);
}
