/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   min.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: victofer <victofer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/26 18:28:06 by victofer          #+#    #+#             */
/*   Updated: 2023/06/28 12:24:16 by victofer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

/**
 * @brief Finds the minimun number of an array of ints.
 * 
 * @param tab Array of ints.
 * @param len size of the array.
 * @return The minimun number of the array;
 */
int	min(int *tab, unsigned int len)
{
	int				min;
	unsigned int	i;

	min = tab[0];
	i = 0;
	while (i <= len)
	{
		if (i == len - 1)
			if (tab[i] < min)
				min = tab[i];
		if ((tab[i] < tab[i + 1]) && (tab[i] < min))
			min = tab[i];
		i++;
	}
	return (min);
}
