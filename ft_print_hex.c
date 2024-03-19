/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_hex.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dflugel <dflugel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/19 17:23:46 by dflugel           #+#    #+#             */
/*   Updated: 2024/03/19 17:23:48 by dflugel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int		ft_print_hex_small(unsigned int hex);
int		ft_print_hex_big(unsigned int hex);
int		calc_hex_printlen(unsigned int hex);
void	put_hex_small(unsigned int hex);
void	put_hex_big(unsigned int hex);

int	ft_print_hex_small(unsigned int hex)
{
	int	printlen;

	printlen = 0;
	put_hex_small(hex);
	printlen = calc_hex_printlen(hex);
	return (printlen);
}

void	put_hex_small(unsigned int hex)
{
	if (hex >= 16)
	{
		ft_print_hex_small(hex / 16);
		ft_print_hex_small(hex % 16);
	}
	else
	{
		if (hex <= 9)
			hex += '0';
		else
			hex = hex - 10 + 'a';
		write(1, &hex, 1);
	}
}

int	ft_print_hex_big(unsigned int hex)
{
	int	printlen;

	printlen = 0;
	put_hex_big(hex);
	printlen = calc_hex_printlen(hex);
	return (printlen);
}

void	put_hex_big(unsigned int hex)
{
	if (hex >= 16)
	{
		ft_print_hex_big(hex / 16);
		ft_print_hex_big(hex % 16);
	}
	else
	{
		if (hex <= 9)
			hex += '0';
		else
			hex = hex - 10 + 'A';
		write(1, &hex, 1);
	}
}

int	calc_hex_printlen(unsigned int hex)
{
	int	printlen;

	printlen = 0;
	if (hex == 0)
		return (1);
	while (hex != 0)
	{
		hex = hex / 16;
		printlen++;
	}
	return (printlen);
}
