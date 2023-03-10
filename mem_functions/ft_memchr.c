/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: victofer <victofer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/20 18:53:10 by victofer          #+#    #+#             */
/*   Updated: 2023/03/10 11:38:28 by victofer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*str;
	unsigned char	charac;

	str = (unsigned char *)s;
	charac = (unsigned char)c;
	while (n--)
	{
		if (*str == charac)
			return (str);
		if (n)
			str++;
	}
	return (NULL);
}
