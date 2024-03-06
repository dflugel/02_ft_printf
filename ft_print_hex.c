/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_hex.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dflugel <dflugel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/26 13:45:51 by madwingg          #+#    #+#             */
/*   Updated: 2024/03/03 07:56:09 by dflugel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_hex_small(long hex);
int	ft_print_hex_big(long hex);
int	calc_hex_printlen(long hex);

int	ft_print_hex_small(long hex)
{
	int	printlen;

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
	printlen = calc_hex_printlen(hex);
	return (printlen);
}

int	ft_print_hex_big(long hex)
{
	int	printlen;

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
	printlen = calc_hex_printlen(hex);
	return (printlen);
}

int	calc_hex_printlen(long hex)
{
	int	printlen;

	while (hex != 0)
	{
		hex /= 16;
		printlen++;
		if (hex < 0)
		{
			printlen++;
			hex = hex * -1;
		}
	}
	return (printlen);
}
