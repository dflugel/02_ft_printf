/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dflugel <dflugel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/19 17:22:09 by dflugel           #+#    #+#             */
/*   Updated: 2024/03/19 17:22:11 by dflugel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len);

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*substring;
	size_t	len_final;

	if (!s)
		return (NULL);
	if (start >= ft_strlen(s))
		return (ft_strdup (""));
	len_final = len;
	if (ft_strlen(s) - start <= len)
		len_final = ft_strlen(s) - start;
	substring = malloc (len_final + 1);
	if (!substring)
		return (NULL);
	ft_memcpy (substring, s + start, len_final + 1);
	*(substring + len_final) = '\0';
	return (substring);
}
