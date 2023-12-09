/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kael-ala <kael-ala@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/08 23:02:17 by kael-ala          #+#    #+#             */
/*   Updated: 2023/12/09 17:32:27 by kael-ala         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"
#include <string.h>

int ft_printf(const char *format, ...)
{
    va_list elp;
    int i;

    i = 0;
    va_start(elp, format);
    while (format[i])
    {
        if (format[i] == '%')
        {
            i++;

        }
        i++;
    }
    while (format[i])
    { 
    }
}

int main(void)
{
    ft_printf();
    printf("%d", dest);
}

            if (format[i] == 'c')
                ft_putchar(va_arg(elp, char));
            if (format[i] == 's')
                ft_putstr(va_arg(elp, char));
            if (format[i] == 'p')
                ft_puthexa(va_arg(elp, unsigned int));
            if (format[i] == 'd')
                ft_putnbr(va_arg(elp, int));
            if (format[i] == 'i')
                ft_putnbr(va_arg(elp, unsigned int));
            if (format[i] == 'u')
                ft_putnbr(va_arg(elp, unsigned int));
            if (format[i] == 'x')
                ft_putexa_lower(va_arg(elp, unsigned int));
            if (format[i] == 'X')
                ft_putexa_upper(va_arg(elp, unsigned int));
            if (format[i] == '%')

