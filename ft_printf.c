/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kael-ala <kael-ala@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/08 23:02:17 by kael-ala          #+#    #+#             */
/*   Updated: 2023/12/10 20:39:48 by kael-ala         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf(const char *format, ...)
{
	va_list	elp;
	int		i;
	int		count;

	count = 0;
	i = 0;
	va_start(elp, format);
	while (*format)
	{
		if (*format == '%')
		{
			format++;
			if (*format == 'c')
				count += ft_putchar(va_arg(elp, int));
			else if (*format == 's')
				count += ft_putstr(va_arg(elp, char *));
			else if (*format == 'p')
				count += ft_putaddress(va_arg(elp, void *));
			else if (*format == 'd')
				count += ft_putnbr(va_arg(elp, int));
			else if (*format == 'i')
				count += ft_putnbr(va_arg(elp, int));
			else if (*format == 'u')
				count += ft_putunbr(va_arg(elp, unsigned int));
			else if (*format == 'x')
				count += ft_putexa(va_arg(elp, unsigned int));
			else if (*format == 'X')
				count += ft_putexa_upper(va_arg(elp, unsigned int));
			else if (*format == '%')
				count += ft_putchar('%');
			format++;
		}
		count += ft_putchar(*format);
		if (*format)
			format++;
	}
	return (count);
}
