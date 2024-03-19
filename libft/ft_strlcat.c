/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dflugel <dflugel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/19 17:21:20 by dflugel           #+#    #+#             */
/*   Updated: 2024/03/19 17:21:21 by dflugel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size);
//size_t	ft_catlen(char *dst, const char *src, size_t size);

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	if (size == 0)
		return (ft_strlen(src));
	while (*(dst + i) && i < size)
		i++;
	while (*(src + j) && i + j + 1 < size)
	{
		*(dst + i + j) = *(src + j);
		j++;
	}
	if (size != 0 && i < size)
		*(dst + i + j) = '\0';
	while (*(src + j))
		j++;
	return (i + j);
}
