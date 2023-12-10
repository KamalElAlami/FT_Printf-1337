/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printtools.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kael-ala <kael-ala@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/09 02:28:51 by kael-ala          #+#    #+#             */
/*   Updated: 2023/12/10 20:36:52 by kael-ala         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putchar(int c)
{
	return (write(1, &c, 1));
}

int	ft_putnbr(int n)
{
	long	nbr;
	int		count;

	nbr = n;
	count = 0;
	if (nbr < 0)
	{
		ft_putchar('-');
		nbr = -nbr;
		count = 1;
	}
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

int	ft_putstr(const char *str)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (str[i])
	{
		ft_putchar(str[i++]);
		count++;
	}
	return (count);
}

int	ft_putexa(unsigned long long n)
{
	int		count;
	char	*buff;

	count = 0;
	buff = "0123456789abcdef";
	if (n > 15)
	{
		count += ft_putexa(n / 16);
		count += ft_putexa(n % 16);
	}
	else
		count += ft_putchar(buff[n]);
	return (count);
}

int	ft_putaddress(void *n)
{
	int					count;
	unsigned long long	add;

	add = (unsigned long long)n;
	count = 0;
	count += ft_putstr("0x");
	count += ft_putexa(add);
	return (count);
}

// int main(void)
// {
// 	ft_putaddress(20000000000);
// 	return (0);
// }
