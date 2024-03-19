/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dflugel <dflugel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/19 17:20:26 by dflugel           #+#    #+#             */
/*   Updated: 2024/03/19 17:20:28 by dflugel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n);

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t				i;
	unsigned const char	*source_memory;
	unsigned char		*target_memory;

	if (!dest && !src)
	{
		return (NULL);
	}
	target_memory = dest;
	source_memory = src;
	i = 0;
	while (i < n)
	{
		*target_memory = *source_memory;
		target_memory++;
		source_memory++;
		i++;
	}
	return (dest);
}
