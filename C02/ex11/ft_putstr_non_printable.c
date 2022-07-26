/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_putstr_non_printable.c                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: ial-azha <ial-azha@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/07/19 16:38:48 by ial-azha      #+#    #+#                 */
/*   Updated: 2022/07/22 02:01:45 by ial-azha      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	hex(int c)
{
	char	*hexadec;
	int		first;

	hexadec = "0123456789abcdef";
	first = c / 16;
	write(1, "\\", 1);
	write(1, &(hexadec[first]), 1);
	write(1, &(hexadec[c - first * 16]), 1);
}

void	ft_putstr_non_printable(char *str)
{
	int	a;

	a = 0;
	while (str[a] != '\0')
	{
		if ((str[a] < 32) || (str[a] > 127))
		{
			hex(str[a]);
		}
		else
		{
			write(1, &str[a], 1);
		}
		++a;
	}
}

// int	main	(void)
// {
// 	char str[] = "Coucou\ntu \n\n\avas bien ?";
// 	ft_putstr_non_printable(str);
// }