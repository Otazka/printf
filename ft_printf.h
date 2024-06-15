/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elenasurovtseva <elenasurovtseva@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/15 15:18:15 by elenasurovt       #+#    #+#             */
/*   Updated: 2024/06/15 15:46:23 by elenasurovt      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef  FT_PRINTF_H
# define FT_PRINTF_H

# ifdef __APPLE__
#  define PTR_NULL "0x0"
# else
#  define PTR_NULL "(nil)"
# endif

# include <unistd.h>
# include <stdio.h>
# include <stdarg.h>
# include <stdlib.h>
# include <stddef.h>
# include <limits.h>

size_t  ft_strlen(const char *s);
int     ft_strchr(char *s, char c);
int     ft_hex_length(int n);
int     ft_nbr_length(int n);
int     ft_unsigned_nbr_length(unsigned int n);
int     ft_convert_hex(size_t nb);
int     ft_convert_hex_upper(unsigned int nb);
int     ft_convert_p(va_list arg);
int     ft_convert_u(va_list arg);
int     ft_convert_c(va_list arg);
int     ft_convert_s(va_list arg);
int     ft_convert_di(va_list arg);
int     ft_convert_x(va_list arg);
int     ft_convert_xx(va_list arg);
int     ft_chose_convert(va_list arg, char c);
int     ft_printf(const char *format, ...);
void    ft_putchar_fd(char c, int fd);
void    ft_putstr_fd(char *s, int fd);
void    ft_putnbr_fd(int n, int fd);
void    ft_unsigned_putnbr_fd(unsigned int n, int fd);
#endif