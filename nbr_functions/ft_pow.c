/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_pow.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: victofer <victofer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/29 13:36:48 by victofer          #+#    #+#             */
/*   Updated: 2023/06/28 12:23:33 by victofer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

/**
 * @brief Computes [x] raised to the power [pow].
 * 
 * @param x number.
 * @param pow pow.
 * @return int The result of x to the pow.
 */
int	ft_pow(int x, int pow)
{
	int	i;
	int	res;

	i = 0;
	res = x;
	while (i < pow - 1)
	{
		res *= x;
		i++;
	}
	return (res);
}
