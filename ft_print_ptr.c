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
		ft_putstr_fd_error("0x0", 1);
		return (3);
	}
	ft_putstr_fd_error("0x", 1);
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
		ft_putchar_fd_error(ptr, 1);
	}
}
