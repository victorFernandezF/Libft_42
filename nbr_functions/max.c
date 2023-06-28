/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   max.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: victofer <victofer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/26 18:16:13 by victofer          #+#    #+#             */
/*   Updated: 2023/06/28 12:24:01 by victofer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

/**
 * @brief Finds the maximun number of an array of ints.
 * 
 * @param tab Array of ints.
 * @param len size of the array.
 * @return The maximun number of the array;
 */
int	max(int *tab, unsigned int len)
{
	int				max;
	unsigned int	i;

	max = 0;
	i = 0;
	while (i <= len)
	{
		if (i == len - 1)
			if (tab[i] > max)
				max = tab[i];
		if ((tab[i] > tab[i + 1]) && (tab[i] > max))
			max = tab[i];
		i++;
	}
	return (max);
}
