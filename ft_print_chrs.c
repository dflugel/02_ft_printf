/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_chrs.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dflugel <dflugel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/26 13:45:49 by madwingg          #+#    #+#             */
/*   Updated: 2024/02/19 23:02:05 by dflugel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_print_char(int c);
void	ft_print_str(char *str);
void	ft_putstr_fd(char *s, int fd);
size_t	ft_strlen(char const *s);

void	ft_print_char(int c)
{
	ft_putchar_fd(c, 1);
}

void	ft_print_str(char *str)
{
	ft_putstr_fd(str, 1);
}

void	ft_putstr_fd(char *s, int fd)
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

size_t	ft_strlen(char const *s)
{
	size_t	i;

	i = 0;
	while (*(s + i) != '\0')
	{
		i++;
	}
	return (i);
}
