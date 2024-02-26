/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   client.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: btaveira <btaveira@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/22 09:27:20 by btaveira          #+#    #+#             */
/*   Updated: 2024/01/31 13:18:20 by btaveira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minitalk.h"

void	string_to_bin(char c, int pid)
{
	int	bit;

	bit = 0;
	while (bit < 8)
	{
		if ((c & 128) == 0)
			kill(pid, SIGUSR1);
		else
			kill(pid, SIGUSR2);
		c <<= 1;
		bit++;
		usleep(500);
	}
}

void	send_text(char *str, int pid)
{
	int	i;

	i = 0;
	while (str[i])
	{
		string_to_bin(str[i], pid);
		i++;
	}
	string_to_bin('\0', pid);
}

int	main(int argc, char **argv)
{
	int		pid;
	char	*str;

	if (argc != 3)
	{
		ft_printf("./client <PID> <MESSAGE>");
		return (1);
	}
	pid = ft_atoi(argv[1]);
	str = argv[2];
	if (pid < 0 || !str)
	{
		ft_printf("argumentos inválidos");
		return (1);
	}
	send_text(str, pid);
	return (0);
}
