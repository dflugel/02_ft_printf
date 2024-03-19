/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dflugel <dflugel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/19 17:21:03 by dflugel           #+#    #+#             */
/*   Updated: 2024/03/19 17:21:05 by dflugel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c);

char	*ft_strchr(const char *s, int c)
{
	if (c < 0)
	{
		return ((char *)s);
	}
	while (*(s) != '\0')
	{
		if (*(s) == (char)c)
		{
			return ((char *)s);
		}
		s++;
	}
	if (*(s) == (char)c)
	{
		return ((char *)s);
	}
	return (NULL);
}
