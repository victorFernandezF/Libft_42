/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: victofer <victofer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/20 19:48:27 by victofer          #+#    #+#             */
/*   Updated: 2023/06/28 12:22:12 by victofer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

static int	ft_is_sign(char n)
{
	if (n == '+' || n == '-')
		return (1);
	return (0);
}

static int	ft_is_nbr(char n)
{
	if (n >= 48 && n <= 57)
		return (1);
	return (0);
}

/**
 * @brief Converts a string with digits in an integer.
 * 
 * @param str String to be converted.
 * @return int with the string converted to number.
 */
int	ft_atoi(const char *str)
{
	int		result;
	int		sign;
	int		i;

	i = 0;
	result = 0;
	sign = 1;
	while ((str[i] >= 9 && str[i] <= 13) || str[i] == ' ')
		i++;
	if (ft_is_sign(str[i]))
	{
		if (str[i] == '-')
			sign *= -1;
		i++;
	}
	while (ft_is_nbr(str[i]))
	{
		result = result * 10 + str[i] - '0';
		i++;
	}
	return (result * sign);
}
