/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_ptr.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dflugel <dflugel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/19 17:23:56 by dflugel           #+#    #+#             */
/*   Updated: 2024/03/19 17:23:57 by dflugel          ###   ########.fr       */
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
		write(1, "0x0", 3);
		return (3);
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
