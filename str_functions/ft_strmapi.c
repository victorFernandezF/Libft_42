/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: victofer <victofer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/23 18:25:23 by victofer          #+#    #+#             */
/*   Updated: 2023/06/28 12:36:26 by victofer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

/**
 * @brief Applies the function ’f’ to each character of the
 *   string ’s’, and passing its index as first argument
 *   to create a new string (with malloc(3)) resulting
 *   from successive applications of ’f’
 * 
 * @param s The string on which to iterate.
 * @param f The function to apply to each character.
 * @return The string created from the successive applications
 * of ’f’ or  null if the allocation fails.
 */
char	*ft_strmapi(char *s, char (*f)(unsigned int, char))
{
	char	*str;
	int		i;

	if (!s || !f)
		return (NULL);
	str = (char *)malloc(sizeof(char) * ft_strlen(s) + 1);
	if (!str)
		return (NULL);
	i = 0;
	while (s[i])
	{
		str[i] = f(i, s[i]);
		i++;
	}
	str[i] = '\0';
	return (str);
}
