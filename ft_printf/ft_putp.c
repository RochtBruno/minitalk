/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putp.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: btaveira <btaveira@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/14 14:34:46 by btaveira          #+#    #+#             */
/*   Updated: 2023/11/14 15:45:44 by btaveira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putp(size_t p)
{
	if (!p)
		return (ft_putstr("(nil)"));
	return (ft_putstr("0x") + ft_lowerhex((unsigned long long) p));
}
