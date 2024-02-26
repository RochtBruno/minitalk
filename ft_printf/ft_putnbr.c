/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: btaveira <btaveira@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/23 19:34:20 by btaveira          #+#    #+#             */
/*   Updated: 2023/11/13 19:54:27 by btaveira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static	int	ft_get_nbr_len(long int nbr)
{
	int	count_num;

	count_num = 0;
	if (nbr < 0)
		count_num++;
	while (nbr / 10)
	{
		count_num++;
		nbr /= 10;
	}
	return (count_num);
}

int	ft_putnbr(long int n)
{
	int	len;

	len = 1;
	if (n < 0)
	{
		ft_putchar('-');
		len++;
		n *= -1;
	}
	if (n > 9)
	{
		ft_putnbr(n / 10);
		ft_putnbr(n % 10);
	}
	else
		ft_putchar(n + 48);
	len += ft_get_nbr_len(n);
	return (len);
}
/*#include <stdio.h>
int main(void)
{
	int x = -2147483648;
	//int y = 2147483647;
	printf("\n%d\n",ft_putnbr(x));
}*/
