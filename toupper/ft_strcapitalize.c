/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mogonzal <mogonzal@student.42barcelona.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/11 17:15:35 by mogonzal          #+#    #+#             */
/*   Updated: 2021/11/14 15:33:05 by mogonzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	*ft_strcapitalize(char *str)
{
	int	c;
	int	to_up;

	c = 0;
	to_up = 1;
	while (str[c])
	{
		if ((str[c] >= 'a' && str[c] <= 'z')
			|| (str[c] >= 'A' && str[c] <= 'Z')
			|| (str[c] >= '0' && str[c] <= '9'))
		{
			if (to_up && (str[c] >= 'a' && str[c] <= 'z'))
				str[c] = str[c] - 32;
			else if (!to_up && (str[c] >= 'A' && str[c] <= 'Z'))
				str[c] = str[c] + 32;
			to_up = 0;
		}
		else
			to_up = 1;
		c++;
	}
	return (str);
}
