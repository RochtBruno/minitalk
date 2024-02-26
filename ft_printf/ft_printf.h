/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: btaveira <btaveira@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/10 10:39:57 by btaveira          #+#    #+#             */
/*   Updated: 2024/01/31 13:45:14 by btaveira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <unistd.h>
# include <stdlib.h>
# include <stdarg.h>

int		ft_putnbr(long int n);
int		ft_putchar(char c);
int		ft_check_type(char c, va_list args);
int		ft_putstr(char *s);
int		ft_strlen(const char	*str);
int		ft_atoi(const char *nptr);
char	*ft_strdup(const char *s);
int		ft_hexlen(unsigned long long n);
int		ft_upperhex(unsigned int n);
int		ft_lowerhex(unsigned long long n);
int		ft_printf(const char *format, ...);
int		ft_putp(size_t p);
#endif
