/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dflugel <dflugel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/19 17:24:02 by dflugel           #+#    #+#             */
/*   Updated: 2024/03/25 14:52:49 by dflugel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int		ft_printf(const char *str, ...);
int		ft_printf_callargs(va_list arg, char spec_flag);

int	ft_printf(const char *str, ...)
{
	va_list	args;
	int		readlen;
	int		printlen;

	va_start(args, str);
	readlen = 0;
	printlen = 0;
	if (!str)
		return (-1);
	get_error(1, 1);
	while (*(str + readlen) != '\0')
	{
		if (*(str + readlen) == '%')
			printlen += ft_printf_callargs(args, *(str + readlen++ + 1));
		else
		{
			ft_putchar_fd_error(*(str + readlen), 1);
			printlen++;
		}
		readlen++;
	}
	va_end(args);
	if (get_error(0, 0) == -1)
		return (-1);
	return (printlen);
}

int	ft_printf_callargs(va_list arg, char spec_flag)
{
	if (spec_flag == 'c')
		return (ft_print_char(va_arg(arg, int)));
	else if (spec_flag == 's')
		return (ft_print_str(va_arg(arg, char *)));
	else if (spec_flag == 'p')
		return (ft_print_ptr(va_arg(arg, long long)));
	else if (spec_flag == 'd' || spec_flag == 'i')
		return (ft_print_nbrs(va_arg(arg, long), spec_flag));
	else if (spec_flag == 'u')
		return (ft_print_nbrs(va_arg(arg, unsigned int), spec_flag));
	else if (spec_flag == 'x')
		return (ft_print_hex_small(va_arg(arg, long)));
	else if (spec_flag == 'X')
		return (ft_print_hex_big(va_arg(arg, long)));
	else if (spec_flag == '%')
		return (ft_print_char('%'));
	return (0);
}
