/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dflugel <dflugel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/19 17:21:08 by dflugel           #+#    #+#             */
/*   Updated: 2024/03/19 17:21:10 by dflugel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s);

char	*ft_strdup(const char *s)
{
	char	*duplicate;
	int		i;

	duplicate = malloc(ft_strlen(s) + 1);
	if (!duplicate)
	{
		return (NULL);
	}
	i = 0;
	while (*(s + i) != '\0')
	{
		*(duplicate + i) = *(s + i);
		i++;
	}
	*(duplicate + i) = '\0';
	return (duplicate);
}
