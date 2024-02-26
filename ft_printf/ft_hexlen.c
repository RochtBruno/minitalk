/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_hexlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: btaveira <btaveira@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 13:04:57 by btaveira          #+#    #+#             */
/*   Updated: 2023/11/13 17:02:25 by btaveira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_hexlen(unsigned long long n)
{
	unsigned int	i;

	i = 0;
	if (n < 16)
		return (1);
	else
	{
		while (n > 0)
		{
			n /= 16;
			i++;
		}
	}
	return (i);
}
