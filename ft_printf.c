/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kbatur <kbatur@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/20 12:50:37 by kbatur            #+#    #+#             */
/*   Updated: 2025/01/20 12:50:39 by kbatur           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	ft_flag(const char *str, int index, va_list *ap, int *count)
{
	if (str[index + 1] == '%')
		ft_putchari('%', count);
	else if (str[index + 1] == 'c')
		ft_putchari(va_arg(*ap, int), count);
	else if (str[index + 1] == 's')
		ft_putstri(va_arg(*ap, char *), count);
	else if (str[index + 1] == 'd' || str[index + 1] == 'i')
		ft_putnbr_int(va_arg(*ap, int), "0123456789", count);
	else if (str[index + 1] == 'u')
		ft_putnbr_ulong((unsigned long)va_arg(*ap, unsigned int),
			"0123456789", count);
	else if (str[index + 1] == 'x')
		ft_putnbr_ulong((unsigned long)va_arg(*ap, unsigned int),
			"0123456789abcdef", count);
	else if (str[index + 1] == 'X')
		ft_putnbr_ulong((unsigned long)va_arg(*ap, unsigned int),
			"0123456789ABCDEF", count);
	else if (str[index + 1] == 'p')
		ft_putaddress(va_arg(*ap, unsigned long), count);
	else
		return (0);
	return (1);
}

int	ft_printf(const char *format, ...)
{
	va_list	ap;
	int		index;
	int		count;

	va_start(ap, format);
	index = 0;
	count = 0;
	while (format[index])
	{
		if (format[index] == '%')
		{
			if (ft_flag(format, index, &ap, &count))
				index++;
		}
		else
			ft_putchari(format[index], &count);
		index++;
	}
	va_end(ap);
	return (count);
}
