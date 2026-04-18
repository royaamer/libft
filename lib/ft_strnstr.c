/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: roababne <roababne@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/13 16:23:43 by roababne          #+#    #+#             */
/*   Updated: 2025/12/29 10:46:41 by roababne         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *t, const char *l, size_t len)
{
	size_t	strlen;

	strlen = ft_strlen(l);
	if (!*l)
		return ((char *)t);
	while (*t && len > 0)
	{
		if (!(ft_strncmp(t, l, strlen)) && len >= strlen)
			return ((char *)t);
		t++;
		len--;
	}
	return (NULL);
}
