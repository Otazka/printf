/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_format.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elenasurovtseva <elenasurovtseva@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/15 15:21:48 by elenasurovt       #+#    #+#             */
/*   Updated: 2024/06/15 15:21:51 by elenasurovt      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_convert_hex(size_t nb)
{
	char		tmp;
	static int	i;

	i = 0;
	if (nb != 0)
	{
		ft_convert_hex(nb / 16);
		if (nb % 16 < 10)
			tmp = nb % 16 + 48;
		else
			tmp = (nb % 16) - 10 + 'a';
		write(1, &tmp, 1);
		i++;
	}
	return (i);
}

int	ft_convert_hex_upper(unsigned int nb)
{
	char		tmp;
	static int	i;

	i = 0;
	if (nb != 0)
	{
		ft_convert_hex_upper(nb / 16);
		if (nb % 16 < 10)
			tmp = nb % 16 + 48;
		else
			tmp = (nb % 16) - 10 + 'a' - 32;
		write(1, &tmp, 1);
		i++;
	}
	return (i);
}

int	ft_convert_p(va_list arg)
{
	unsigned long long int	ln;
	int						len;

	len = 0;
	ln = va_arg(arg, unsigned long long int);
	if (ln == 0)
	{
		ft_putstr_fd("0x0", 1);
		return (3);
	}
	ft_putstr_fd("0x", 1);
	len += 2;
	len += ft_convert_hex(ln);
	return (len);
}

int	ft_convert_u(va_list arg)
{
	unsigned int	nbr;

	nbr = va_arg(arg, unsigned int);
	ft_unsigned_putnbr_fd(nbr, 1);
	return (ft_unsigned_nbr_length(nbr));
}
