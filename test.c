/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dflugel <dflugel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/27 13:53:13 by madwingg          #+#    #+#             */
/*   Updated: 2024/01/28 02:12:50 by dflugel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdio.h>

int	main(void)
{
	char	*test;
	int		i;

	i = 4321;
	test = ft_strdup("World");
	ft_printf("Hell%c %s\n%p\n", 'o', test, test);
	ft_printf("%d\n%i\n%u\n%x\n%X\n%%\n", i, i, i, i, i);
	printf("Hell%c %s\n%p\n", 'o', test, test);
	printf("%d\n%i\n%u\n%x\n%X\n%%\n", i, i, i, i, i);
	return (0);
}
