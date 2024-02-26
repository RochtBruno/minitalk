/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: btaveira <btaveira@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 16:18:24 by btaveira          #+#    #+#             */
/*   Updated: 2023/11/13 18:24:03 by btaveira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf(const char *format, ...)
{
	va_list	args;
	int		i;
	int		p;

	p = 0;
	i = 0;
	va_start(args, format);
	while (format[i])
	{
		if (format[i] == '%')
			p += ft_check_type(format[++i], args);
		else
			p += ft_putchar(format[i]);
		i++;
	}
	va_end(args);
	return (p);
}
/*
#include <stdio.h>

int main(void)
{
	ft_printf("%d\n%d",2147483647, -2147483648);
}*/
