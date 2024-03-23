/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_chrs.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dflugel <dflugel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/19 17:23:37 by dflugel           #+#    #+#             */
/*   Updated: 2024/03/23 11:55:56 by dflugel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int		ft_print_char(int c);
int		ft_print_str(char *str);
void	ft_putchar_fd(char c, int fd);
void	ft_putstr_fd(char *s, int fd);

int	ft_print_char(int c)
{
	ft_putchar_fd(c, 1);
	return (1);
}

int	ft_print_str(char *str)
{
	if (!str)
	{
		write(1, "(null)", 6);
		return (6);
	}
	ft_putstr_fd(str, 1);
	return (ft_strlen(str));
}


void	ft_putchar_fd_error(char c, int fd)
{
	if(error_status == 0)
	{
		
		write(fd, &c, 1);
	}
}

void	get_error()
{
	static int	error_status;

	error_status = 0;
}

void	ft_putstr_fd_error(char *s, int fd)
{
	size_t	len;
	size_t	i;

	len = ft_strlen(s);
	i = 0;
	while (i < len)
	{
		write(fd, (s + i), 1);
		i++;
	}
}
