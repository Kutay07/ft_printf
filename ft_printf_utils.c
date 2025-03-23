/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_utils.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kbatur <kbatur@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/20 12:49:01 by kbatur            #+#    #+#             */
/*   Updated: 2025/01/20 12:50:18 by kbatur           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putchari(char c, int *count)
{
	write(1, &c, 1);
	(*count)++;
}

void	ft_putstri(char *str, int *count)
{
	int	index;

	if (!str)
		ft_putstri("(null)", count);
	else
	{
		index = 0;
		while (str[index])
		{
			ft_putchari(str[index], count);
			index++;
		}
	}
}

void	ft_putnbr_int(int nbr, char *base, int *count)
{
	long	nbrl;
	int		len;

	len = 0;
	while (base[len])
		len++;
	nbrl = nbr;
	if (nbrl < 0)
	{
		ft_putchari('-', count);
		nbrl = -nbrl;
	}
	if (nbrl >= len)
		ft_putnbr_int(nbrl / len, base, count);
	ft_putchari(base[nbrl % len], count);
}

void	ft_putnbr_ulong(unsigned long nbr, char *base, int *count)
{
	unsigned long	len;

	len = 0;
	while (base[(int)len])
		len++;
	if (nbr >= len)
		ft_putnbr_ulong((unsigned long)(nbr / len), base, count);
	ft_putchari(base[nbr % len], count);
}

void	ft_putaddress(unsigned long nbr, int *count)
{
	if (nbr == 0)
	{
		ft_putstri("(nil)", count);
		return ;
	}
	ft_putstri("0x", count);
	ft_putnbr_ulong(nbr, "0123456789abcdef", count);
}
