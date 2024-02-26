/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lowerhex.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: btaveira <btaveira@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 13:03:37 by btaveira          #+#    #+#             */
/*   Updated: 2023/11/14 14:16:58 by btaveira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static	char	ft_set_lowerhex(unsigned long long n)
{
	if (n == 10)
		return ('a');
	else if (n == 11)
		return ('b');
	else if (n == 12)
		return ('c');
	else if (n == 13)
		return ('d');
	else if (n == 14)
		return ('e');
	else if (n == 15)
		return ('f');
	else
		return (n + 48);
}

int	ft_lowerhex(unsigned long long n)
{
	unsigned int	hexlen;
	char			*hex;
	int				ret;

	hexlen = ft_hexlen(n);
	hex = (char *)malloc(sizeof(char) * hexlen + 1);
	if (!hex)
		return (0);
	hex[hexlen] = '\0';
	while (hexlen > 0)
	{
		hex[--hexlen] = ft_set_lowerhex(n % 16);
		n /= 16;
	}
	ret = ft_putstr(hex);
	free(hex);
	return (ret);
}
/*#include <stdio.h>

int	main(void)
{
	printf("\n%d\n",ft_lowerhex(45));
}*/
