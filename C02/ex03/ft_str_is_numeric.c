/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_str_is_numeric.c                                :+:    :+:            */
/*                                                     +:+                    */
/*   By: ial-azha <ial-azha@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/07/18 21:03:35 by ial-azha      #+#    #+#                 */
/*   Updated: 2022/07/18 21:15:03 by ial-azha      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <unistd.h>
#include <stdio.h>

int	ft_str_is_numeric(char *str)
{
	int	a;

	a = 0;
	while (str[a])
	{
		if ((str[a] < '0' || str[a] > '9'))
		{
			return (0);
		}
		a++;
	}
	return (1);
}

// int main()
// {
// 	int b;
// 	b = ft_str_is_numeric("11245");
// 	printf("Resultaat: %d\n",b);

// 	return 0;
// }