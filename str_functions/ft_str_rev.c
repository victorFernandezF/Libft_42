/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_rev.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: victofer <victofer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/13 10:40:36 by victofer          #+#    #+#             */
/*   Updated: 2023/06/28 12:31:44 by victofer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

/**
 * @brief Returns a string whith the content of the reverse given string
 *   Example: hello becomes olleh.
 * 
 * @param str string to be reversed
 * @return a new string with the result of reversing str.
 */
char	*ft_str_rev(char *str)
{
	char	*rev;
	int		len;
	int		i;

	i = 0;
	len = ft_strlen(str) -1;
	rev = (char *)malloc(sizeof(char) * (len + 1));
	if (!rev)
		return (NULL);
	while (len >= 0)
	{
		rev[i] = str[len];
		len--;
		i++;
	}
	rev[i] = '\0';
	return (rev);
}
