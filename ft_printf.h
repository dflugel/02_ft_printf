/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dflugel <dflugel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/26 13:45:44 by madwingg          #+#    #+#             */
/*   Updated: 2024/03/18 23:26:03 by dflugel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdarg.h>
#include "libft/libft.h"

// Prototypes

int	ft_printf(const char *str, ...);

int	ft_print_char(int c);

int	ft_print_str(char *str);

int	ft_print_ptr(unsigned long long ptr);

int	ft_print_nbrs(long nbr);

int	u_ft_print_nbrs(long nbr);

int	ft_print_hex_small(unsigned int hex);

int	ft_print_hex_big(unsigned int hex);
