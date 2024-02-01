/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dflugel <dflugel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/26 13:45:44 by madwingg          #+#    #+#             */
/*   Updated: 2024/01/30 16:32:53 by dflugel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdarg.h>
#include "libft/libft.h"

// Prototypes

size_t	ft_strlen(char const *s);

void	ft_putchar_fd(char c, int fd);

void	ft_putstr_fd(char *s, int fd);

void	ft_putnbr_fd(int n, int fd);

int		ft_printf(const char *str, ...);

void	ft_print_char(int c);

void	ft_print_str(char *str);

void	ft_print_ptr(long long ptr);

void	ft_print_nbrs(long nbr);

void	ft_print_hex_small(long hex);

void	ft_print_hex_big(long hex);