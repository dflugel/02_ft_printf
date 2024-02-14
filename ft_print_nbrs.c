/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_nbrs.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dflugel <dflugel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/26 13:45:54 by madwingg          #+#    #+#             */
/*   Updated: 2024/02/14 09:09:02 by dflugel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_print_nbrs(long nbr);

void	ft_print_nbrs(long nbr)
{
	ft_putnbr_fd(nbr, 1);
}
