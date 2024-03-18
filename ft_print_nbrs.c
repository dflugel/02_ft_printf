/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_nbrs.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dflugel <dflugel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/26 13:45:54 by madwingg          #+#    #+#             */
/*   Updated: 2024/03/18 23:10:36 by dflugel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int		ft_print_nbrs(long nbr);
int		nbrlen(int nbr);
int		u_ft_print_nbrs(long nbr);
void	u_ft_putnbr_fd(long n, int fd);
int		u_nbrlen(long nbr);

int	ft_print_nbrs(long nbr)
{
	int	printlen;

	ft_putnbr_fd(nbr, 1);
	printlen = 0;
	printlen = nbrlen(nbr);
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

int	u_ft_print_nbrs(long nbr)
{
	int	printlen;

	u_ft_putnbr_fd(nbr, 1);
	printlen = 0;
	printlen = u_nbrlen(nbr);
	return (printlen);
}

void	u_ft_putnbr_fd(long n, int fd)
{
	char	digit;

	digit = n % 10 + 48;
	n = n / 10;
	if (n != 0)
	{
		u_ft_putnbr_fd(n, fd);
	}
	ft_putchar_fd(digit, fd);
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
