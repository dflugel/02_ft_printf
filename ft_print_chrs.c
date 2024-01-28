/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_chrs.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: madwingg <madwingg@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/26 13:45:49 by madwingg          #+#    #+#             */
/*   Updated: 2024/01/27 13:58:09 by madwingg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_print_char(int c);
void	ft_print_str(char *str);

void	ft_print_char(int c)
{
	ft_putchar_fd(c, 1);
}

void	ft_print_str(char *str)
{
	ft_putstr_fd(str, 1);
}
