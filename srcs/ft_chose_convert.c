/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_chose_convert.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elenasurovtseva <elenasurovtseva@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/15 15:17:41 by elenasurovt       #+#    #+#             */
/*   Updated: 2024/06/17 22:59:20 by elenasurovt      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_chose_convert(va_list arg, char c)
{
	if (c == 'c')
		return (ft_convert_c(arg));
	else if (c == 's')
		return (ft_convert_s(arg));
	else if (c == 'd' || c == 'i')
		return (ft_convert_di(arg));
	else if (c == 'x')
		return (ft_convert_x(arg));
	else if (c == 'X')
		return (ft_convert_xx(arg));
	else if (c == 'p')
		return (ft_convert_p(arg));
	else if (c == 'u')
		return (ft_convert_u(arg));
	else
	{
		ft_putchar_fd('%', 1);
		return (1);
	}
	return (0);
}
