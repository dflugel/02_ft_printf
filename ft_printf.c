/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dflugel <dflugel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/26 13:45:46 by madwingg          #+#    #+#             */
/*   Updated: 2024/01/28 02:15:07 by dflugel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf(const char *str, ...);
int	ft_printf_callargs(va_list arg, char spec_flag);
int	ft_print_text(const char *text);

int	ft_printf(const char *str, ...)
{
	va_list	args;
	int		len;

	va_start(args, str);
	len = 0;
	if (!str)
		return (-1);
	while (*(str + len) != '\0')
	{
		if (*(str + len) == '%')
			len += ft_printf_callargs(args, *(str + len + 1));
		else
			len += ft_print_text((str + len));
	}
	va_end(args);
	return (len);
}

int	ft_printf_callargs(va_list arg, char spec_flag)
{
	if (spec_flag == 'c')
		ft_print_char(va_arg(arg, int));
	else if (spec_flag == 's')
		ft_print_str(va_arg(arg, char *));
	else if (spec_flag == 'p')
		ft_print_ptr(va_arg(arg, long long));
	else if (spec_flag == 'd' || spec_flag == 'i')
		ft_print_nbrs(va_arg(arg, long));
	else if (spec_flag == 'u')
		ft_print_nbrs(va_arg(arg, unsigned int));
	else if (spec_flag == 'x')
		ft_print_hex_small(va_arg(arg, long));
	else if (spec_flag == 'X')
		ft_print_hex_big(va_arg(arg, long));
	else if (spec_flag == '%')
		ft_print_char('%');
	else
		return (0);
	return (2);
}

int	ft_print_text(const char *text)
{
	size_t	i;

	i = 0;
	while (*(text + i) != '%' && *(text + i) != '\0')
	{
		ft_putchar_fd(*(text + i), 1);
		i++;
	}
	return (i);
}
