/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: victofer <victofer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/23 18:47:56 by victofer          #+#    #+#             */
/*   Updated: 2023/06/28 12:33:36 by victofer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

/**
 * @brief Applies the function ’f’ on each character of
 *   the string passed as argument, passing its index
 *   as first argument. Each character is passed by
 *   address to ’f’ to be modified if necessary.
 * 
 * @param s The string on which to iterate.
 * @param f The function to apply to each character.: string.
 */
void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	int		i;

	if (!s || !f)
		return ;
	i = 0;
	while (s[i])
	{
		f(i, &(s[i]));
		i++;
	}
}
