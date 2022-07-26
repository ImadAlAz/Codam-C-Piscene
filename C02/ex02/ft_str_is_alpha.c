/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_str_is_alpha.c                                  :+:    :+:            */
/*                                                     +:+                    */
/*   By: ial-azha <ial-azha@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/07/18 17:03:56 by ial-azha      #+#    #+#                 */
/*   Updated: 2022/07/18 21:00:09 by ial-azha      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <unistd.h>
#include <stdio.h>

int	ft_str_is_alpha(char *str)
{
	int	a;

	a = 0;
	while (str[a])
	{
		if ((str[a] < 'a' || str[a] > 'z') && (str[a] < 'A' || str[a] > 'Z'))
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
// 	b = ft_str_is_alpha("abc3");
// 	printf("Resultaat: %d\n",b);

// 	return 0;
// }