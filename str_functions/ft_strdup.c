/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: victofer <victofer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/21 19:14:12 by victofer          #+#    #+#             */
/*   Updated: 2023/06/28 12:33:05 by victofer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

/**
 * @brief Reserves enought memory to make a copy of the string
 *   and does the copy
 * 
 * @param s1 String to be copied 
 * @return A copy of s1. 
 */
char	*ft_strdup(char *s1)
{
	char	*str;
	size_t	i;
	size_t	len;

	len = ft_strlen(s1);
	if (s1 == NULL)
		return (NULL);
	str = malloc((sizeof(char) * (len + 1)));
	if (!str)
		return (NULL);
	i = 0;
	while (s1[i])
	{
		str[i] = s1[i];
		i++;
	}
	str[i] = '\0';
	return (str);
}
