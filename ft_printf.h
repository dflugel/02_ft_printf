/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dflugel <dflugel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/26 13:45:44 by madwingg          #+#    #+#             */
/*   Updated: 2024/02/22 01:34:57 by dflugel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdarg.h>
#include "libft/libft.h"

// Prototypes

int		ft_printf(const char *str, ...);

void	ft_print_char(int c);

void	ft_print_str(char *str);

void	ft_print_ptr(long long ptr);

void	ft_print_nbrs(long nbr);

void	ft_print_hex_small(long hex);

void	ft_print_hex_big(long hex);
