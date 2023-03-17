/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: victofer <victofer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/20 18:37:01 by victofer          #+#    #+#             */
/*   Updated: 2023/03/17 10:52:52 by victofer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"
/*
 * Function: square_the_biggest
 * ----------------------------
 *   Returns the square of the largest of its two input values
 *
 *   n1: one real value 
 *   n2: the other real value
 *
 *   returns: the square of the larger of n1 and n2 
 */
int	ft_tolower(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (c + 32);
	else
		return (c);
}
