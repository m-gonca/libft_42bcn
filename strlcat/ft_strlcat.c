/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mogonzal <mogonzal@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/15 17:00:56 by mogonzal          #+#    #+#             */
/*   Updated: 2021/11/17 10:54:39 by mogonzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

int	ft_count(char *str);

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	d;
	unsigned int	s;
	unsigned int	l;
	unsigned int	i;

	d = ft_count(dest);
	s = ft_count(src);
	l = (d + s);
	i = 0;
	if (size > (d + 1))
	{
		while (src[i] && i < (size - 1) - (l - s))
		{
			dest[d] = src[i];
			i++;
			d++;
		}
		dest[size - 1] = '\0';
	}
	return (l);
}

int	ft_count(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}
