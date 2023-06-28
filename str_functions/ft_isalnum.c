/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: victofer <victofer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/20 18:35:15 by victofer          #+#    #+#             */
/*   Updated: 2023/06/28 12:26:37 by victofer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

/**
 * @brief  Checks if a given char is alphanumeric (letters or numbers)
 * 
 * @param c char to be check. 
 * @return 1 if is alphanumeric and 0 if not.
 */
int	ft_isalnum(int c)
{
	if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
		return (1);
	else if (c >= 48 && c <= 57)
		return (1);
	else
		return (0);
}
