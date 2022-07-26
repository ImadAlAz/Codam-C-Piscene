/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strlcpy.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: ial-azha <ial-azha@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/07/19 01:59:06 by ial-azha      #+#    #+#                 */
/*   Updated: 2022/07/21 00:26:55 by ial-azha      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	int	a;
	int	astop;

	a = 0;
	if (size == 0)
	{
		return (a);
	}
	astop = size - 1;
	while (src[a] != '\0')
	{
		if (a == astop)
		{
			dest[a] = '\0';
			return (a);
		}
		dest[a] = src[a];
		a++;
	}
	if (a == astop)
	{
		dest[a] = '\0';
		a++;
	}
	return (a);
}

// int main (void)
// {
// 	char	ar1[3] = "hi";
// 	char	ar2[3];
// 	ft_strlcpy(ar2, ar1, 3);
// 	printf("%s", ar2);
// }