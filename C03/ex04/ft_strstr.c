/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strstr.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: ial-azha <ial-azha@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/07/21 00:19:10 by ial-azha      #+#    #+#                 */
/*   Updated: 2022/07/26 00:08:37 by ial-azha      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <string.h>

char	*ft_strstr(char *str, char *to_find)
{
	int	a;
	int	b;

	a = 0;
	if (to_find[0] == '\0')
	{
		return (str);
	}
	while (str[a] != '\0')
	{
		b = 0;
		while (str[a + b] != '\0' && str[a + b] == to_find[b])
		{
			if (to_find[b + 1] == '\0')
				return (&str[a]);
				b++;
		}
		a++;
	}
	return (0);
}

// int	main (void)
// {
// 	char	str[] = "zoek voor voor alles";
// 	char	to_find[] = "voorj";
// 	printf("%s", ft_strstr(str, to_find));
// }