/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_type.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: btaveira <btaveira@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 13:27:42 by btaveira          #+#    #+#             */
/*   Updated: 2023/11/14 15:44:58 by btaveira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_check_type(char c, va_list args)
{
	int	i;

	i = 0;
	if (c == 'd' || c == 'i')
		i += ft_putnbr(va_arg(args, int));
	else if (c == 'c')
		i += ft_putchar(va_arg(args, int));
	else if (c == 's')
		i += ft_putstr(va_arg(args, char *));
	else if (c == 'p')
		i += ft_putp(va_arg(args, unsigned long long));
	else if (c == 'x')
		i += ft_lowerhex(va_arg(args, unsigned int));
	else if (c == 'X')
		i += ft_upperhex(va_arg(args, unsigned int));
	else if (c == 'u')
		i += ft_putnbr(va_arg(args, unsigned int));
	else if (c == '%')
		i += ft_putchar('%');
	return (i);
}
