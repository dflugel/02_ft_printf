/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dflugel <dflugel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/19 17:20:13 by dflugel           #+#    #+#             */
/*   Updated: 2024/03/19 17:20:15 by dflugel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n);

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t		i;
	const char	*searchstring;

	i = 0;
	searchstring = s;
	while (i < n)
	{
		if ((unsigned char)*(searchstring + i) == (unsigned char)c)
		{
			return ((void *)searchstring + i);
		}
		i++;
	}
	return (NULL);
}
