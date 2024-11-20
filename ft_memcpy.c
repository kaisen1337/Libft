/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkasimi <nkasimi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/30 17:16:56 by nkasimi           #+#    #+#             */
/*   Updated: 2024/11/12 21:47:01 by nkasimi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char		*arr1;
	unsigned const char	*arr2;
	size_t				i;

	if ((!dest && !src) || n == 0)
		return (dest);
	arr1 = dest;
	arr2 = src;
	i = 0;
	while (i < n)
	{
		arr1[i] = arr2[i];
		i++;
	}
	return (dest);
}
