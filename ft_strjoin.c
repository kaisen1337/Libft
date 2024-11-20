/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkasimi <nkasimi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/29 10:19:52 by nkasimi           #+#    #+#             */
/*   Updated: 2024/11/07 11:59:59 by nkasimi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*a;
	int		i;
	int		k;

	if (!s1 || !s2)
		return (NULL);
	a = malloc((ft_strlen(s1) + ft_strlen(s2) + 1) * (sizeof(char)));
	if (!a)
		return (NULL);
	i = 0;
	while (i < (int)ft_strlen(s1))
	{
		a[i] = s1[i];
		i++;
	}
	k = 0;
	while (k < (int)ft_strlen(s2))
	{
		a[i] = s2[k];
		i++;
		k++;
	}
	a[i] = '\0';
	return (a);
}
// we cast with int because ft_strlen return size_t type.
