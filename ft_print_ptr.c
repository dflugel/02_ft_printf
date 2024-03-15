/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_ptr.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dflugel <dflugel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/26 13:45:57 by madwingg          #+#    #+#             */
/*   Updated: 2024/03/15 15:22:52 by dflugel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int		ft_print_ptr(unsigned long long ptr);
void	ft_put_ptr(unsigned long long ptr);

int	ft_print_ptr(unsigned long long ptr)
{
	int	printlen;

	if (ptr == 0)
	{
		write(1, "(nil)", 5);
		return (5);
	}
	write(1, "0x", 2);
	ft_put_ptr(ptr);
	printlen = 2;
	while (ptr != 0)
	{
		ptr /= 16;
		printlen++;
	}
	return (printlen);
}

void	ft_put_ptr(unsigned long long ptr)
{
	if (ptr >= 16)
	{
		ft_put_ptr(ptr / 16);
		ft_put_ptr(ptr % 16);
	}
	else
	{
		if (ptr <= 9)
			ptr += '0';
		else
			ptr = ptr - 10 + 'a';
		write(1, &ptr, 1);
	}
}
