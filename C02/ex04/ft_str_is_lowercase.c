/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_str_is_lowercase.c                              :+:    :+:            */
/*                                                     +:+                    */
/*   By: ial-azha <ial-azha@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/07/18 21:15:39 by ial-azha      #+#    #+#                 */
/*   Updated: 2022/07/18 21:20:08 by ial-azha      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <unistd.h>
#include <stdio.h>

int	ft_str_is_lowercase(char *str)
{
	int	a;

	a = 0;
	while (str[a])
	{
		if ((str[a] < 'a' || str[a] > 'z'))
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
// 	b = ft_str_is_lowercase("Imad");
// 	printf("Resultaat: %d\n",b);

// 	return 0;
// }