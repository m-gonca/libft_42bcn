/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main0.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mogonzal <mogonzal@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/17 16:21:19 by mogonzal          #+#    #+#             */
/*   Updated: 2021/11/18 15:49:12 by mogonzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

int	ft_atoi(char *str);

int	main(void)
{
//	char	string[] = " ---+--+1234ab567";
//	char	string[] = "a";
//	char	string[] = "\0";
//	char	string[] = " -+1";
	char	string[] = "\n++ ---1";
//	char	string[] = "1234";
//	char	string[] = " ---+--+1234ab567";
	printf("%d\n", ft_atoi(string));
	return (0);
}
