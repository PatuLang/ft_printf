/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plang <plang@student.hive.fi>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/23 11:28:30 by plang             #+#    #+#             */
/*   Updated: 2023/11/23 11:28:35 by plang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <unistd.h>

int	ft_putchar(char c, int *ip);
int	ft_puthex_base(unsigned long c, int caps, int *ip);
int	ft_putint_base(int c, int *ip);
int	ft_putpointer(unsigned long adress, int *ip);
int	ft_putstr(char *str, int *ip);
int	ft_putunsig(unsigned int c, int *ip);
int	ft_format_specifier(char specifier, va_list args, int *ip);
int	ft_printf(const char *format, ...);

#endif
