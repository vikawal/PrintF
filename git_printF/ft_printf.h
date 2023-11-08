/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmyshko <vmyshko@student.codam.nl>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/02 15:42:55 by vmyshko           #+#    #+#             */
/*   Updated: 2023/11/08 11:58:43 by vmyshko          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stddef.h>
# include <stdlib.h>
# include <unistd.h>
# include <stdio.h>
# include "LIBFT/libft.h"
# include <stdarg.h>

int				print_putchar(char c);
int				print_putstr(char *s);
int				print_putnbr(int n);
unsigned int	print_unsigned_putnbr(unsigned int n);
unsigned int	print_hex_upper(unsigned int n);
unsigned int	print_hex_lower(unsigned int n);
int				ft_print_arg(va_list args, char format);
unsigned long	print_pointer(unsigned long number);
int				ft_printf(const char *format, ...);

#endif