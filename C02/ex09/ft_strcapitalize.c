/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strcapitalize.c                                 :+:    :+:            */
/*                                                     +:+                    */
/*   By: ial-azha <ial-azha@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/07/19 00:48:38 by ial-azha      #+#    #+#                 */
/*   Updated: 2022/07/20 13:42:35 by ial-azha      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <unistd.h>
#include <stdio.h>

char	*ft_strcapitalize(char *str)
{
	int		a;
	int		next;
	char	c;

	a = 0;
	next = 1;
	while (*(str + a) != '\0')
	{
		c = *(str + a);
		if (next == 1 && c >= 'a' && c <= 'z')
			str[a] = str[a] - 32;
		else if (next == 0 && c >= 'A' && c <= 'Z')
			str[a] = str[a] + 32;
		if (c < '0' || (c > '9' && c < 'A') || (c > 'Z' && c < 'a') || c > 122)
			next = 1;
		else
			next = 0;
		a++;
	}
	return (str);
}

// int   main(void)
// {
//   char str[] = "salut, comment tu vas ?";

//   printf("%s", ft_strcapitalize(str));
//   return (0);
// }
