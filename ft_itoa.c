/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkasimi <nkasimi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/01 18:55:02 by nkasimi           #+#    #+#             */
/*   Updated: 2024/11/07 17:02:34 by nkasimi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	n_counter(int n)
{
	int	counter;

	counter = 0;
	if (n <= 0)
		counter = 1;
	while (n)
	{
		n = n / 10;
		counter++;
	}
	return (counter);
}

static void	fill_n_str(char *str, int n)
{
	int	len;

	len = n_counter(n);
	while (len--)
	{
		str[len] = n % 10 + '0';
		n = n / 10;
	}
}

char	*ft_itoa(int n)
{
	int		len;
	char	*a;

	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	len = n_counter(n);
	a = malloc((len + 1) * sizeof(char));
	if (!a)
		return (NULL);
	if (n == 0)
		a[0] = '0';
	if (n > 0)
		fill_n_str(a, n);
	else if (n < 0)
	{
		a[0] = '-';
		fill_n_str(a + 1, -n);
	}
	a[len] = '\0';
	return (a);
}
