/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkasimi <nkasimi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/29 10:18:09 by nkasimi           #+#    #+#             */
/*   Updated: 2024/11/13 09:18:42 by nkasimi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	unsigned char	*arr;
	size_t			i;

	if (!s)
		return (0);
	arr = s;
	i = 0;
	while (i < n)
	{
		arr[i] = (unsigned char)c;
		i++;
	}
	return (s);
}
