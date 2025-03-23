/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kbatur <kbatur@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/20 12:50:44 by kbatur            #+#    #+#             */
/*   Updated: 2025/01/20 12:50:46 by kbatur           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <unistd.h>
# include <stdarg.h>

int		ft_printf(const char *s, ...);
void	ft_putchari(char c, int *count);
void	ft_putstri(char *str, int *index);
void	ft_putnbr_int(int nbr, char *base, int *count);
void	ft_putnbr_ulong(unsigned long nbr, char *base, int *count);
void	ft_putaddress(unsigned long nbr, int *count);

#endif
