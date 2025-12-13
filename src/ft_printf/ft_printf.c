/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: calvares <calvares@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/08 20:50:01 by calvares          #+#    #+#             */
/*   Updated: 2025/12/13 19:39:22 by calvares         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	format_specifier(const char *format, va_list *args, int *i)
{
	int	re;

	re = 0;
	if (format[*i + 1] == 'c')
		re += ft_putchar(va_arg(*args, int));
	else if (format[*i + 1] == 's')
		re += ft_putstr(va_arg(*args, char *));
	else if (format[*i + 1] == 'p')
		re += ft_putaddress(va_arg(*args, unsigned long));
	else if (format[*i + 1] == 'd' || format[*i + 1] == 'i')
		re += ft_putnbr(va_arg(*args, int));
	else if (format[*i + 1] == 'u')
		re += ft_putunbr(va_arg(*args, unsigned int));
	else if (format[*i + 1] == 'x')
		re += ft_puthexadecimal_lowercase(va_arg(*args, unsigned int));
	else if (format[*i + 1] == 'X')
		re += ft_puthexadecimal_uppercase(va_arg(*args, unsigned int));
	else if (format[*i + 1] == '%')
		re += write (1, "%", 1);
	else
	{
		re += write(1, "%", 1);
	}
	*i += 2;
	return (re);
}

int	ft_printf(const char *str, ...)
{
	va_list	args;
	int		i;
	int		re;

	re = 0;
	if (!str)
		return (-1);
	va_start(args, str);
	i = 0;
	while (str[i])
	{
		if (str[i] == '%' && str[i + 1])
			re += format_specifier(str, &args, &i);
		re += write (1, &str[i], 1);
		i++;
	}
	va_end(args);
	return (re);
}
