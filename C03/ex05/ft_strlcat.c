/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strlcat.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: ial-azha <ial-azha@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/07/21 18:54:13 by ial-azha      #+#    #+#                 */
/*   Updated: 2022/07/25 14:31:14 by ial-azha      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <string.h>

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	a;
	unsigned int	b;
	unsigned int	c;

	a = 0;
	while (dest[a] != '\0')
		a++;
	b = 0;
	while (src[b] != '\0' && b < size)
	{
		dest[a + b] = src[b];
		b++;
	}
	dest[a + b] = '\0';
	c = 0;
	while (src[c] != '\0')
		c++;
	return (c + size);
}

// int main(void) {
//     char dest[10] = "abc";
//     char src[10] = "def";
// 	int size;

// 	size = 10;
// 	ft_strlcat(dest, src, size);
//     printf("%s\n", dest);
//     return 0;
// }
