/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aessaoud <aessaoud@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/12 19:40:25 by aessaoud          #+#    #+#             */
/*   Updated: 2022/10/17 18:18:11 by aessaoud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# include <stdarg.h>
# include <stdio.h>
# include <unistd.h>
// # include <limits.h>

int	ft_printf(const char *s, ...);
int	ft_putchar(unsigned char c);
int	ft_putstr(char *str);
int	ft_putnbr(long int num, char *base);
int	ft_putnbru(unsigned long int num, char *base);

#endif