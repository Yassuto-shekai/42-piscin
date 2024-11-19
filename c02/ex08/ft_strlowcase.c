/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yel-mota <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/05 12:23:46 by yel-mota          #+#    #+#             */
/*   Updated: 2024/09/07 16:41:43 by yel-mota         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strlowcase(char *str)
{
	int	m;

	m = 0;
	while (str[m] != '\0')
	{
		if (str[m] >= 'A' && str[m] <= 'Z')
		{
			str[m] = str[m] + 32;
		}
		m++;
	}
	return (str);
}
