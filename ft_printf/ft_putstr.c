/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: btaveira <btaveira@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/23 19:20:49 by btaveira          #+#    #+#             */
/*   Updated: 2023/11/14 14:03:17 by btaveira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putstr(char *s)
{
	int	i;

	i = 0;
	if (!s)
		return (ft_putstr("(null)"));
	while (s[i])
	{
		write (1, &s[i], 1);
		i++;
	}
	return (i);
}
/*#include <stdio.h>

int	main(void)
{
	printf("%d\n",ft_putstr("banana"));
}*/
