/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkasimi <nkasimi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/29 10:20:17 by nkasimi           #+#    #+#             */
/*   Updated: 2024/11/07 11:57:56 by nkasimi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *str, const char *find, size_t len)
{
	size_t	i;
	size_t	k;

	if (!str && len == 0)
		return (NULL);
	if (*find == '\0')
		return ((char *)str);
	i = 0;
	while (str[i] && i < len)
	{
		k = 0;
		while (find[k] && (str[i + k] == find[k]) && (i + k) < len)
		{
			k++;
		}
		if (!find[k])
		{
			return ((char *)(str + i));
		}
		i++;
	}
	return (NULL);
}
