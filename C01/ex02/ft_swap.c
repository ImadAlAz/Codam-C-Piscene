/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_swap.c                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: ial-azha <ial-azha@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/07/15 11:49:33 by ial-azha      #+#    #+#                 */
/*   Updated: 2022/07/17 03:29:21 by ial-azha      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_swap(int *a, int *b)
{
	int	s;

	s = *a;
	*a = *b;
	*b = s;
}

// int main(void)
// {
// 	int a;
// 	int b;

// 	a = 200;
// 	b = 100;
// 	ft_swap (&a, &b);
// 	printf ("%d\n", a);
// 	printf ("%d", b);
// 	return (0);
// }