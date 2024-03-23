/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_nbrs.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dflugel <dflugel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/19 17:23:51 by dflugel           #+#    #+#             */
/*   Updated: 2024/03/19 17:23:52 by dflugel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int		ft_print_nbrs(long nbr, char spec_flag);
int		nbrlen(int nbr);
void	ft_putnbr_fd_error(int n, int fd);
void	u_ft_putnbr_fd_error(long n, int fd);
int		u_nbrlen(long nbr);

int	ft_print_nbrs(long nbr, char spec_flag)
{
	int	printlen;

	if (spec_flag == 'd' || spec_flag == 'i')
		ft_putnbr_fd_error(nbr, 1);
	else if (spec_flag == 'u')
		u_ft_putnbr_fd_error(nbr, 1);
	printlen = 0;
	if (spec_flag == 'd' || spec_flag == 'i')
		printlen = nbrlen(nbr);
	else if (spec_flag == 'u')
		printlen = u_nbrlen(nbr);
	return (printlen);
}

int	nbrlen(int nbr)
{
	int	printlen;

	printlen = 0;
	if (nbr == 0)
		return (1);
	else if (nbr == -2147483648)
		return (11);
	while (nbr != 0)
	{
		if (nbr < 0)
		{
			printlen++;
			nbr = nbr * -1;
		}
		nbr /= 10;
		printlen++;
	}
	return (printlen);
}

void	ft_putnbr_fd_error(int n, int fd)
{
	char	digit;

	if (n == -2147483648)
	{
		ft_putstr_fd_error("-2147483648", fd);
		return ;
	}
	else if (n < 0)
	{
		ft_putchar_fd_error('-', fd);
		n = n * -1;
	}
	digit = n % 10 + 48;
	n = n / 10;
	if (n != 0)
	{
		ft_putnbr_fd_error(n, fd);
	}
	ft_putchar_fd_error(digit, fd);
}

void	u_ft_putnbr_fd_error(long n, int fd)
{
	char	digit;

	digit = n % 10 + 48;
	n = n / 10;
	if (n != 0)
	{
		u_ft_putnbr_fd_error(n, fd);
	}
	ft_putchar_fd_error(digit, fd);
}

int	u_nbrlen(long nbr)
{
	int	printlen;

	printlen = 0;
	if (nbr == 0)
		return (1);
	else if (nbr == -2147483648)
		return (11);
	while (nbr != 0)
	{
		if (nbr < 0)
		{
			printlen++;
			nbr = nbr * -1;
		}
		nbr /= 10;
		printlen++;
	}
	return (printlen);
}
