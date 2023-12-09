/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strtools.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kael-ala <kael-ala@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/09 02:28:51 by kael-ala          #+#    #+#             */
/*   Updated: 2023/12/09 02:40:27 by kael-ala         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

void	ft_putchar(int c)
{
    write(1, &c, 1);
}

void	ft_putnbr(int n)
{
	long	nbr;

	nbr = n;
	if (nbr < 0)
	{
		ft_putchar('-');
		nbr = -nbr;
	}
	if (nbr < 10)
		ft_putchar(nbr + 48);
	else
	{
		ft_putnbr(nbr / 10);
		ft_putnbr(nbr % 10);
	}
}

void	ft_putstr(const char *str)
{
	int	i;

	i = 0;
	while(str[i])
		ft_putchar(str[i++]);

}
