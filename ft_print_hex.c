/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_hex.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dflugel <dflugel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/26 13:45:51 by madwingg          #+#    #+#             */
/*   Updated: 2024/03/08 08:03:08 by dflugel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int		ft_print_hex_small(long long hex);
int		ft_print_hex_big(long long hex);
int		calc_hex_printlen(long long hex);
void	put_hex_small(long long hex);
void	put_hex_big(long long hex);

int	ft_print_hex_small(long long hex)
{
	int	printlen;

	printlen = 0;
	put_hex_small(hex);
	printlen = calc_hex_printlen(hex);
	return (printlen);
}

void	put_hex_small(long long hex)
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

int	ft_print_hex_big(long long hex)
{
	int	printlen;

	printlen = 0;
	put_hex_big(hex);
	printlen = calc_hex_printlen(hex);
	return (printlen);
}

void	put_hex_big(long long hex)
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

int	calc_hex_printlen(long long hex)
{
	int	printlen;

	printlen = 0;
	if (hex == 0)
		return (1);
	while (hex != 0)
	{
		hex = hex / 16;
		printlen++;
		if (hex < 0)
		{
			printlen++;
			hex = hex * -1;
		}
	}
	return (printlen);
}
