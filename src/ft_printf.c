/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plang <plang@student.hive.fi>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/19 13:08:35 by plang             #+#    #+#             */
/*   Updated: 2023/11/19 13:08:40 by plang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf(const char *format, ...)
{
	int		count;
	int		ip;
	va_list	args;

	count = 0;
	ip = 1;
	va_start(args, format);
	while (*format != '\0')
	{
		if (*format == '%')
		{
			count += ft_format_specifier(*(++format), args, &ip);
			format++;
		}
		else
			count += ft_putchar(*(format++), &ip);
		if (ip == -1)
		{
			va_end(args);
			return (-1);
		}
	}
	va_end(args);
	return (count);
}
