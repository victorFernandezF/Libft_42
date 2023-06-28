/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: victofer <victofer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/23 18:57:39 by victofer          #+#    #+#             */
/*   Updated: 2023/06/28 12:29:38 by victofer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

/**
 * @brief Writes a char in the given file descriptor.
 * 
 * @param c char to be writen. 
 * @param fd file descriptor.
 */
void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, sizeof(c));
}
