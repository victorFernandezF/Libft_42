/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_number.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: victofer <victofer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/04 18:04:13 by victofer          #+#    #+#             */
/*   Updated: 2023/03/10 12:14:29 by victofer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

int	ft_print_int(int n)
{
	int		ret;
	char	*num;

	ret = 0;
	num = ft_itoa(n);
	ret += ft_print_string(num);
	free (num);
	return (ret);
}
