/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mogonzal <mogonzal@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/12 11:52:06 by mogonzal          #+#    #+#             */
/*   Updated: 2022/01/12 17:19:53 by mogonzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	*ft_memcpy(void *restrict dst, const void *restrict src, size_t n)
{
	size_t	i;
	size_t	c;

	c = 0;
	i = 0;
	while (((unsigned char *)dst)[c] != '\0')
		c++;
	if (n <= (c + 1))
		while (((((unsigned char *)src) != (void *)0)) && n > 0)
		{
			((unsigned char *)dst)[i] = ((unsigned char *)src)[i];
			i++;
			n--;
		}
	return (dst);
}
