/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_str_is_uppercase.c                              :+:    :+:            */
/*                                                     +:+                    */
/*   By: ial-azha <ial-azha@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/07/18 21:18:32 by ial-azha      #+#    #+#                 */
/*   Updated: 2022/07/18 21:28:49 by ial-azha      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <unistd.h>
#include <stdio.h>

int	ft_str_is_uppercase(char *str)
{
	int	a;

	a = 0;
	while (str[a])
	{
		if ((str[a] < 'A' || str[a] > 'Z'))
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
// 	b = ft_str_is_uppercase("IMAD");
// 	printf("Resultaat: %d\n",b);

// 	return 0;
// }