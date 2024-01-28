/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_ptr.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dflugel <dflugel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/26 13:45:57 by madwingg          #+#    #+#             */
/*   Updated: 2024/01/28 02:18:25 by dflugel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_print_ptr(long long ptr);
void	ft_put_ptr(long long ptr);

void	ft_print_ptr(long long ptr)
{
	write(1, "0x", 2);
	ft_put_ptr(ptr);
}

void	ft_put_ptr(long long ptr)
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
