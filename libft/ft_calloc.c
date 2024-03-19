/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: madwingg <madwingg@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/09 12:27:01 by dflugel           #+#    #+#             */
/*   Updated: 2024/01/21 17:07:25 by madwingg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size);

void	*ft_calloc(size_t nmemb, size_t size)
{
	int		i;
	int		n;
	char	*place;

	if (nmemb * size > 2147483647)
		return (NULL);
	i = 0;
	n = nmemb * size;
	place = (void *)malloc(n);
	if (!place)
		return (0);
	while (i < (n))
	{
		*(place + i) = '\0';
		i++;
	}
	return ((void *)place);
}
