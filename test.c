/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dflugel <dflugel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/27 13:53:13 by madwingg          #+#    #+#             */
/*   Updated: 2024/03/14 18:58:58 by dflugel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdio.h>
#include <limits.h>

/* int	main(void)
{
	char	*test;
	int		i;

	i = 4321;
	test = ft_strdup("World");
	printf("%i\n", ft_printf("Hell%c %s\n%p\n", 'o', test, test));
	printf("%i\n", ft_printf("%d\n%i\n%u\n%x\n%X\n%%\n", i, i, i, i, i));
	printf("%i\n", printf("Hell%c %s\n%p\n", 'o', test, test));
	printf("%i\n", printf("%d\n%i\n%u\n%x\n%X\n%%\n", i, i, i, i, i));
	return (0);
} */

int	main(void)
{
	printf("\n%i\n\n", ft_printf(" %p %p ", LONG_MIN, LONG_MAX));
	printf("\n%i\n\n", printf(" %p %p ", LONG_MIN, LONG_MAX));

	/*int		i;

	i = 4321;
	// d
	printf("\n%i\n\n", ft_printf("%d\n", i));
	printf("\n%i\n\n", printf("%d\n", i));
	// i
	printf("\n%i\n\n", ft_printf("%d\n%i\n", i, i));
	printf("\n%i\n\n", printf("%d\n%i\n", i, i));
	//u
	printf("\n%i\n\n", ft_printf("%d\n%i\n%u\n", i, i, i));
	printf("\n%i\n\n", printf("%d\n%i\n%u\n", i, i, i));
	//x
	printf("\n%i\n\n", ft_printf("%d\n%i\n%u\n%x\n", i, i, i, i));
	printf("\n%i\n\n", printf("%d\n%i\n%u\n%x\n", i, i, i, i));
	//X
	printf("\n%i\n\n", ft_printf("%d\n%i\n%u\n%x\n%X\n%%\n", i, i, i, i, i));
	printf("\n%i\n\n", printf("%d\n%i\n%u\n%x\n%X\n%%\n", i, i, i, i, i));*/
	return (0);
}
