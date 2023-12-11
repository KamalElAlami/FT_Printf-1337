/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kael-ala <kael-ala@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/08 23:02:17 by kael-ala          #+#    #+#             */
/*   Updated: 2023/12/11 13:33:51 by kael-ala         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	setter(char format, va_list elp)
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
	return (count);
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
			count += setter(*format, elp);
			if (*format)
				format++;
		}
		else {
			count += ft_putchar(*format);
			format++;
		}
	}
	va_end(elp);
	return (count);
}
// int main(void)
// {
// // 	ft_printf(" %i %i %i %i %i %i %", INT_MAX, INT_MIN, LONG_MAX, LONG_MIN, ULONG_MAX, 0, -42);
// 	ft_printf("%s ", (char *)NULL);
// // 	// printf("%d\n", printf("%%"));
// }
