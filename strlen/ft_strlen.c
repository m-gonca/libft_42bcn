/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mogonzal <mogonzal@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/17 16:23:52 by mogonzal          #+#    #+#             */
/*   Updated: 2022/01/11 14:00:49 by mogonzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stddef.h> 

size_t	ft_strlen(const char *s)
{
	unsigned int	i;

	i = 0;
	while (*s != '\0')
	{
		i++;
		s++;
	}
	return (i);
}
