/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mogonzal <mogonzal@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/11 19:03:51 by mogonzal          #+#    #+#             */
/*   Updated: 2022/01/11 20:02:32 by mogonzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stddef.h> 

void	*ft_memset(void *b, int c, size_t len)
{
	int	i;

	i = 0;
	while ((((unsigned char*)b)[i] != '\0') && len > 0)
	{
		((unsigned char*)b)[i] = c;
		len--;
		i++;
	}
	return (b);
}
