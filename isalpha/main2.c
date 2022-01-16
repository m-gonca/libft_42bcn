/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main2.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mogonzal <mogonzal@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/10 18:01:55 by mogonzal          #+#    #+#             */
/*   Updated: 2022/01/10 18:07:39 by mogonzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <ctype.h> 
#include <stdio.h>

int	ft_isalpha(unsigned char c);

int	main(void)
{
	unsigned char	c;

	c = '\0';

	printf("%d\n", isalpha(c));
	printf("%d\n", ft_isalpha(c));
	return (0);
}
