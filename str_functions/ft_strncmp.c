/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: victofer <victofer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/21 11:11:36 by victofer          #+#    #+#             */
/*   Updated: 2023/06/28 12:37:05 by victofer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

/**
 * @brief Compares not more than n characters.
 * 
 * @param s1 String to be compared 
 * @param s2 String to be compared.
 * @param n Size_t with the number of chars to compare.
 * @return An integer greater than, equal to, or less than 0,
 * according as the string s1 is greater than,
 * equal to, or less than the string s2.
 */
int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	unsigned int	i;
	unsigned char	*str1;
	unsigned char	*str2;

	str1 = (unsigned char *)s1;
	str2 = (unsigned char *)s2;
	if (n == 0)
		return (0);
	i = 0;
	while (str1[i] != '\0' && str2[i] != '\0' && n - 1 > i)
	{
		if (str1[i] != str2[i])
			return (str1[i] - str2[i]);
		i++;
	}
	if (n != 0)
		return (str1[i] - str2[i]);
	return (0);
}
