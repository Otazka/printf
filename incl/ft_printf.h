/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elenasurovtseva <elenasurovtseva@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/15 15:18:15 by elenasurovt       #+#    #+#             */
/*   Updated: 2024/06/18 00:47:58 by elenasurovt      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# ifdef __APPLE__
#  define PTR_NULL "0x0"
# else
#  define PTR_NULL "(nil)"
# endif

# include "libft.h"
# include <unistd.h>
# include <stdio.h>
# include <stdarg.h>
# include <stdlib.h>
# include <stddef.h>
# include <limits.h>

int		    ft_hex_length(int n);
int		    ft_nbr_length(int n);
int		    ft_unsigned_nbr_length(unsigned int n);
int		    ft_convert_hex(size_t nb);
int		    ft_convert_hex_upper(unsigned int nb);
void        ft_pointer(size_t pointer, int *length);
void        ft_convert_unsigned_int(unsigned int u, int *length);
int		    ft_convert_string(va_list arg);
void        ft_hexadecimal(unsigned int x, int *length, char x_or_x);
void        ft_putcharacter_length(char character, int *length);
static void ft_chose_convert(char s, va_list *args, int *len, int *i);
int		    ft_printf(const char *format, ...);
void	    ft_unsigned_putnbr_fd(unsigned int n, int fd);
#endif
