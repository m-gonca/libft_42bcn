/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mogonzal <mogonzal@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/14 21:03:25 by mogonzal          #+#    #+#             */
/*   Updated: 2021/11/15 12:29:51 by mogonzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_check_string(char *str, char *to_find);

char	*ft_strstr(char *str, char *to_find)
{
	unsigned int	i;
	unsigned int	c;
	unsigned int	result;

	i = 0;
	c = 0;
	if (to_find[i] == '\0')
		return (str);
	while (str[i] != '\0')
	{
		if (str[i] == to_find[c])
		{	
			result = ft_check_string(&str[i], to_find);
			if (result != '\0')
				return (str + i);
		}
		i++;
	}
	return (0);
}

int	ft_check_string(char *str, char *to_find)
{
	unsigned int	l;
	unsigned int	count;

	l = 0;
	count = 0;
	while (to_find[l] != '\0')
	{
		if (str[l] == to_find[l])
			count++;
		l++;
	}
	if (count == l)
		return (l);
	return (0);
}
