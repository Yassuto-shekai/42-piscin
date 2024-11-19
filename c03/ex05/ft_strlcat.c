/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yel-mota <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/07 15:54:18 by yel-mota          #+#    #+#             */
/*   Updated: 2024/09/19 04:02:15 by yel-mota         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int	m;

	m = 0;
	while (str[m])
		m++;
	return (m);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	lendest;
	unsigned int	lensrc;
	unsigned int	res;

	lendest = ft_strlen(dest);
	lensrc = ft_strlen(src);
	i = 0;
	if (lendest < size)
		res = lendest + lensrc;
	else
		res = lensrc + size;
	if (size == 0)
		return (res);
	while (src[i] && lendest + i < size - 1)
	{
		dest[lendest + i] = src[i];
		i++;
	}
	dest[lendest + i] = '\0';
	return (res);
}
