/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strlen.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: ial-azha <ial-azha@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/07/17 18:00:49 by ial-azha      #+#    #+#                 */
/*   Updated: 2022/07/18 14:08:38 by ial-azha      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_strlen(char *str)
{
	int	a;

	a = 0;
	while (str[a] != '\0')
		a++;
	return (a);
}

// int	main(void)
// {
// 	char *s = "imad";
// 	printf("%d\n", ft_strlen(s));
// 	return (0);
// }