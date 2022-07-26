/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strncpy.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: ial-azha <ial-azha@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/07/18 15:19:00 by ial-azha      #+#    #+#                 */
/*   Updated: 2022/07/21 17:08:24 by ial-azha      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	a;

	a = 0;
	while (a < n && src[a])
	{
		dest[a] = src[a];
		a++;
	}
	while (a < n)
	{
		dest[a] = '\0';
		a++;
	}
	return (dest);
}

int main()
{
    char	A[] = "Imad is mijn naam";
    char	*B = "Dami";
    unsigned int  n = 4;

    printf("%s\n", ft_strncpy(A, B, n));
    return 0;
}