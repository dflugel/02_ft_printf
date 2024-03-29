/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_chrs.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dflugel <dflugel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/19 17:23:37 by dflugel           #+#    #+#             */
/*   Updated: 2024/03/25 14:53:08 by dflugel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int		ft_print_char(int c);
int		ft_print_str(char *str);
void	ft_putchar_fd_error(char c, int fd);
void	ft_putstr_fd_error(char *s, int fd);

int	ft_print_char(int c)
{
	ft_putchar_fd_error(c, 1);
	return (1);
}

int	ft_print_str(char *str)
{
	if (!str)
	{
		ft_putstr_fd_error("(null)", 1);
		return (6);
	}
	ft_putstr_fd_error(str, 1);
	return (ft_strlen(str));
}

void	ft_putchar_fd_error(char c, int fd)
{
	if (get_error(0, 0) == 0)
		get_error(write(fd, &c, 1), 0);
}

int	get_error(int write_result, int init)
{
	static int	error_status;

	if (init == 1)
		error_status = 0;
	if (error_status == -1)
		return (-1);
	else if (write_result < 0)
		error_status = -1;
	else
		error_status = 0;
	return (error_status);
}

void	ft_putstr_fd_error(char *s, int fd)
{
	size_t	len;
	size_t	i;

	len = ft_strlen(s);
	i = 0;
	while (i < len)
	{
		ft_putchar_fd_error(*(s + i), fd);
		i++;
	}
}
