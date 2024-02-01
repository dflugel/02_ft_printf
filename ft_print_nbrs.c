/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_nbrs.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dflugel <dflugel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/26 13:45:54 by madwingg          #+#    #+#             */
/*   Updated: 2024/01/30 16:31:32 by dflugel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_print_nbrs(long nbr);

void	ft_print_nbrs(long nbr)
{
	ft_putnbr_fd(nbr, 1);
}

void	ft_putnbr_fd(int n, int fd)
{
	char	digit;

	if (n == -2147483648)
	{
		write(fd, "-2147483648", 11);
		return ;
	}
	else if (n < 0)
	{
		ft_putchar_fd('-', fd);
		n = n * -1;
	}
	digit = n % 10 + 48;
	n = n / 10;
	if (n != 0)
	{
		ft_putnbr_fd(n, fd);
	}
	ft_putchar_fd(digit, fd);
}
