/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elenasurovtseva <elenasurovtseva@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/15 15:17:22 by elenasurovt       #+#    #+#             */
/*   Updated: 2024/06/17 17:33:28 by elenasurovt      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf(const char *format, ...)
{
	int		len;
	int		count;
	va_list	arg;

	count = 0;
	len = 0;
	va_start(arg, format);
	if (ft_strchr((char *)format, '%') == 0)
	{
		ft_putstr_fd((char *)format, 1);
		return (ft_strlen(format));
	}
	while (format[count])
	{
		if (format[count] != '%')
			len += write(1, &format[count], 1);
		else
		{
			len += (ft_chose_convert(arg, format[count + 1]));
			count++;
		}
		count++;
	}
	va_end(arg);
	return (len);
}
