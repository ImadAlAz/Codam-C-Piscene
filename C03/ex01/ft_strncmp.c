/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strncmp.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: ial-azha <ial-azha@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/07/20 18:14:07 by ial-azha      #+#    #+#                 */
/*   Updated: 2022/07/25 20:14:34 by ial-azha      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>
#include <string.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	a;

	a = 0;
	while (s1[a] != '\0' && s2[a] != '\0' && a < n)
	{
		if (s1[a] != s2[a])
		{
			return (s1[a] - s2[a]);
		}
		a++;
	}
	while (a < n)
	{
		s1[a] = '\0';
		s2[a] = '\0';
		a++;
	}
	return (s1[a] - s2[a]);
}

// int main(void)
// {
// 	int n;

// 	n = 3;
// 	char	s1[] = "a";
// 	char	s2[] = "A";
// 	printf("%d\n", ft_strncmp(s1, s2, n));
// }