/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elenasurovtseva <elenasurovtseva@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/15 15:17:22 by elenasurovt       #+#    #+#             */
/*   Updated: 2024/06/18 01:11:35 by elenasurovt      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "incl/ft_printf.h"

int	ft_printf(const char *format, ...)
{
	va_list	args;
	int		i;
	int		length;

	i = 0;
	length = 0;
	va_start(args, format;
	while (format[i] != '\0')
	{
		if (format[i] == '%')
		{
			i++;
			ft_printf_checker(format[i], &args, &length, &i);
			i++;
		}
		else
		{
			ft_putcharacter_length((char)format[i], &length);
			i++;
		}
	}
	va_end(args);
	return (length);
}
