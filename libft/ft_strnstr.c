/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dflugel <dflugel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/19 17:21:51 by dflugel           #+#    #+#             */
/*   Updated: 2024/03/19 17:21:53 by dflugel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len);

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	if (*little == '\0' || little == 0)
		return ((char *) big);
	while (*(big + i) != '\0' && i < len)
	{
		while (*(big + i + j) == *(little + j) && i + j < len)
		{
			j++;
			if (*(little + j) == '\0')
			{
				return ((char *) big + i);
			}
		}
		j = 0;
		i++;
	}
	return (NULL);
}
