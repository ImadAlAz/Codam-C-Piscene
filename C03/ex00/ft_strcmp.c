/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strcmp.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: ial-azha <ial-azha@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/07/19 20:47:30 by ial-azha      #+#    #+#                 */
/*   Updated: 2022/07/24 00:47:53 by ial-azha      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <string.h>

int	ft_strcmp(char *s1, char *s2)
{
	int	a;

	a = 0;
	while (s1[a] == s2[a] && s1[a] != '\0' && s2[a] != '\0')
	{
		a++;
	}
	return (s1[a] - s2[a]);
}

// int main()
// {
//  char s1[] = "abcd";
//  char s2[] = "abCd";
//  printf("%d", ft_strcmp(s1, s2));
//  return(0);
// }