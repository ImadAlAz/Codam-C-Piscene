/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_str_is_printable.c                              :+:    :+:            */
/*                                                     +:+                    */
/*   By: ial-azha <ial-azha@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/07/18 21:21:48 by ial-azha      #+#    #+#                 */
/*   Updated: 2022/07/18 21:31:17 by ial-azha      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <unistd.h>
#include <stdio.h>

int	ft_str_is_printable(char *str)
{
	int	a;

	a = 0;
	while (str[a])
	{
		if ((str[a] < 32 || str[a] > 127))
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
// 	b = ft_str_is_printable("ImadIsmijnNaAm.)_");
// 	printf("Resultaat: %d\n",b);

// 	return 0;
// }