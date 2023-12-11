/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dedsec <dedsec@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/08 23:02:17 by kael-ala          #+#    #+#             */
/*   Updated: 2023/12/11 01:26:58 by dedsec           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int setter(char format, va_list elp)
{
	int	count;

	count = 0;
	if (format == 'c')
		count += ft_putchar(va_arg(elp, int));
	else if (format == 's')
		count += ft_putstr(va_arg(elp, char *));
	else if (format == 'p')
		count += ft_putaddress(va_arg(elp, void *));
	else if (format == 'd')
		count += ft_putnbr(va_arg(elp, int));
	else if (format == 'i')
		count += ft_putnbr(va_arg(elp, int));
	else if (format == 'u')
		count += ft_putunbr(va_arg(elp, unsigned int));
	else if (format == 'x')
		count += ft_putexa(va_arg(elp, unsigned int));
	else if (format == 'X')
		count += ft_putexa_upper(va_arg(elp, unsigned int));
	else if (format == '%')
		count += ft_putchar('%');
}

int	ft_printf(const char *format, ...)
{
	va_list	elp;
	int		count;

	count = 0;
	va_start(elp, format);
	while (*format)
	{
		if (*format == '%')
		{
			format++;
			setter(*format, elp);
			format++;
		}
		count += ft_putchar(*format);
		if (*format)
			format++;
	}
	return (count);
}

int main(void)
{
	int p = 2;
	printf("%d\n", ft_printf("%p\n", &p));
	printf("%d\n", printf("%p\n", &p));
}
