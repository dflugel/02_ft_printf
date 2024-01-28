/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_hex.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dflugel <dflugel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/26 13:45:51 by madwingg          #+#    #+#             */
/*   Updated: 2024/01/28 02:20:06 by dflugel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_print_hex_small(long hex);
void	ft_print_hex_big(long hex);

void	ft_print_hex_small(long hex)
{
	if (hex >= 16)
	{
		ft_print_hex_small(hex / 16);
		ft_print_hex_small(hex % 16);
	}
	else
	{
		if (hex <= 10)
			hex += '0';
		else
			hex = hex - 10 + 'a';
		write(1, &hex, 1);
	}
}

void	ft_print_hex_big(long hex)
{
	if (hex >= 16)
	{
		ft_print_hex_big(hex / 16);
		ft_print_hex_big(hex % 16);
	}
	else
	{
		if (hex <= 10)
			hex += '0';
		else
			hex = hex - 10 + 'A';
		write(1, &hex, 1);
	}
}
