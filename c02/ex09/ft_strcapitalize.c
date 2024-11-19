/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yel-mota <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/05 13:33:09 by yel-mota          #+#    #+#             */
/*   Updated: 2024/09/07 17:09:16 by yel-mota         ###   ########.fr       */
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

char	*ft_strcapitalize(char *str)
{
	int	m;

	ft_strlowcase(str);
	m = 0;
	if(str[m] >= 'a' && str[m] <= 'z')
		str[m] = str[m] - 32;
	m++;
	while (str[m] != '\0')
	{
		if (!(str[m - 1] >= 'a' && str[m - 1] <= 'z')
		&& !(str[m - 1] >= 'A' && str[m - 1] <= 'Z')
		&& !(str[m - 1] >= '0' && str[m - 1] <= '9'))
		{
			if (str[m] >= 'a' && str[m] <= 'z')
			{
				str[m] = str[m] - 32;
			}
		}
		m++;
	}
	return (str);
}
