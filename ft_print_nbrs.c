/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_nbrs.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dflugel <dflugel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/26 13:45:54 by madwingg          #+#    #+#             */
/*   Updated: 2024/03/08 08:03:02 by dflugel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_nbrs(long nbr);

int	ft_print_nbrs(long nbr)
{
	int	printlen;

	ft_putnbr_fd(nbr, 1);
	printlen = 0;
	if (nbr == 0)
		return (1);
	while (nbr != 0)
	{
		nbr /= 10;
		printlen++;
		if (nbr < 0)
		{
			printlen++;
			nbr = nbr * -1;
		}
	}
	return (printlen);
}
