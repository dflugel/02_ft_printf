/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dflugel <dflugel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/19 17:24:07 by dflugel           #+#    #+#             */
/*   Updated: 2024/03/25 14:51:59 by dflugel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# include <stdarg.h>
# include "libft/libft.h"

// Prototypes

int		ft_printf(const char *str, ...);

int		ft_print_char(int c);

void	ft_putchar_fd_error(char c, int fd);

void	ft_putstr_fd_error(char *s, int fd);

int		get_error(int write_result, int init);

int		ft_print_str(char *str);

int		ft_print_ptr(unsigned long long ptr);

int		ft_print_nbrs(long nbr, char spec_flag);

int		ft_print_hex_small(unsigned int hex);

int		ft_print_hex_big(unsigned int hex);

#endif
