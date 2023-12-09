/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libftprintf.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kael-ala <kael-ala@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/09 02:27:09 by kael-ala          #+#    #+#             */
/*   Updated: 2023/12/09 02:51:30 by kael-ala         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef LIBFTPRINTF_H
# define LIBFTPRINTF_H

# include <unistd.h>
# include <stdio.h>
# include <stdarg.h>

int ft_printf(const char *format, ...);

void ft_putchar(int c);
void	ft_putnbr(int n);

# endif