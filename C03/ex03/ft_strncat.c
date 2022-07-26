/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strncat.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: ial-azha <ial-azha@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/07/24 00:53:32 by ial-azha      #+#    #+#                 */
/*   Updated: 2022/07/25 15:37:09 by ial-azha      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <string.h>

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	int				a;
	unsigned int	b;

	a = 0;
	while (dest[a])
	{
		a++;
	}
	b = 0;
	while (src[b] && b < nb)
	{
		dest[a] = src[b];
		a++;
		b++;
	}
	dest[a] = '\0';
	return (dest);
}

// int	main(void)
// {
// 	char dest[4] = "a";
// 	char src[] = "bc";
// 	int nb;

// 	nb = 5;
// 	printf("%s", ft_strncat(dest, src, nb));
// }