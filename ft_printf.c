/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kael-ala <kael-ala@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/08 23:02:17 by kael-ala          #+#    #+#             */
/*   Updated: 2023/12/09 02:53:23 by kael-ala         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"
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
            if (format[i] == 'c')
            if (format[i] == 's')
            if (format[i] == 'p')
            if (format[i] == 'd')
            if (format[i] == 'i')
            if (format[i] == 'u')
            if (format[i] == 'x')
            if (format[i] == 'X')
            if (format[i] == '%')
        }
    }
    
}

int main(void)
{
    // ft_printf();
}