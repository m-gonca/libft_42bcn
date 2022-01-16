/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mogonzal <mogonzal@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/17 17:59:20 by mogonzal          #+#    #+#             */
/*   Updated: 2021/11/18 14:00:56 by mogonzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_checknb(char *str, int sign);

int	ft_atoi(char *str)
{
	int	i;
	int	cminus;
	int	nb;

	nb = 0;
	i = 0;
	cminus = 0;
	while ((str[i] >= 9 && str[i] <= 13) || str[i] == ' ')
		i++;
	while (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			cminus++;
		i++;
	}
	if (str[i] < '0' || str[i] > '9')
		return (nb);
	else
		nb = ft_checknb(&str[i], cminus);
	return (nb);
}

int	ft_checknb(char *str, int sign)
{
	int	nb;
	int	i;

	nb = 0;
	i = 0;
	while (str[i] >= '0' && str[i] <= '9')
	{
		nb = nb * 10;
		nb = nb + (str[i] - 48);
		i++;
	}
	if (sign % 2 != 0)
		nb = -nb;
	return (nb);
}
