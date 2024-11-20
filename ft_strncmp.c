/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkasimi <nkasimi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/29 10:20:13 by nkasimi           #+#    #+#             */
/*   Updated: 2024/11/13 09:16:35 by nkasimi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *big, const char *little, size_t n)
{
	size_t	i;

	i = 0;
	if (!big || !little)
		return (0);
	if (n == 0)
		return (0);
	while ((big[i] || little[i]) && i < n)
	{
		if (big[i] != little[i])
		{
			return ((unsigned char)big[i] - (unsigned char)little[i]);
		}
		i++;
	}
	return (0);
}
