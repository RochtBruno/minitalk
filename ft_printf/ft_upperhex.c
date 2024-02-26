/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_upperhex.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: btaveira <btaveira@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 13:06:25 by btaveira          #+#    #+#             */
/*   Updated: 2023/11/14 14:19:34 by btaveira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static	char	ft_set_upperhex(unsigned int n)
{
	if (n == 10)
		return ('A');
	else if (n == 11)
		return ('B');
	else if (n == 12)
		return ('C');
	else if (n == 13)
		return ('D');
	else if (n == 14)
		return ('E');
	else if (n == 15)
		return ('F');
	else
		return (n + 48);
}

int	ft_upperhex(unsigned int n)
{
	unsigned int	hexlen;
	char			*hex;
	int				ret;	

	hexlen = ft_hexlen(n);
	hex = (char *)malloc(sizeof (char) * hexlen + 1);
	if (!hex)
		return (0);
	hex[hexlen] = '\0';
	while (hexlen > 0)
	{
		hex[--hexlen] = ft_set_upperhex(n % 16);
		n /= 16;
	}
	ret = ft_putstr(hex);
	free(hex);
	return (ret);
}
/*#include <stdio.h>
int main(void)
{
	printf("\n%d\n",ft_upperhex(45));
}*/
