/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_atoi.c                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: ial-azha <ial-azha@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/07/25 14:56:08 by ial-azha      #+#    #+#                 */
/*   Updated: 2022/07/25 17:54:41 by ial-azha      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

// #include <unistd.h>
// #include <stdio.h>
// #include <string.h>
// #include <stdlib.h>

int	ft_atoi(char *str)
{
	int	res;
	int	sign;

	res = 0;
	sign = 1;
	while (*str == 32 || (*str >= 9 && *str <= 13))
		str++;
	if (*str == '-')
		sign += -1;
	if (*str == '-' || *str == '+')
		str++;
	while (*str >= '0' && *str <= '9')
	{
		res = res * 10 + *str - '0';
		str++;
	}
	return (res * sign);
}

// int	main(int ac, char **av)
// {
// 	int mine;
// 	int theirs;
// 	if (ac == 2)
// 	{
// 		mine = ft_atoi(av[1]);
// 		theirs = atoi(av[1]);
// 		printf("mine: %d | theirs: %d\n", mine, theirs);
// 	}
// 	return (0);
// }
