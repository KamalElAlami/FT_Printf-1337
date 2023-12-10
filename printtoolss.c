/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printtoolss.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kael-ala <kael-ala@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/10 19:25:25 by kael-ala          #+#    #+#             */
/*   Updated: 2023/12/10 20:37:01 by kael-ala         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putexa_upper(unsigned long long n)
{
	int		count;
	char	*buff;

	count = 0;
	buff = "0123456789ABCDEF";
	if (n > 15)
	{
		count += ft_putexa(n / 16);
		count += ft_putexa(n % 16);
	}
	else
		count += ft_putchar(buff[n]);
	return (count);
}

int	ft_putunbr(unsigned int n)
{
	unsigned long	nbr;
	int				count;

	nbr = n;
	count = 0;
	if (nbr < 10)
	{
		ft_putchar(nbr + 48);
		count++;
	}
	else
	{
		ft_putnbr(nbr / 10);
		ft_putnbr(nbr % 10);
	}
	return (count);
}
