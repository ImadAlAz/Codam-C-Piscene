/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_div_mod.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: ial-azha <ial-azha@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/07/15 12:25:25 by ial-azha      #+#    #+#                 */
/*   Updated: 2022/07/17 03:29:22 by ial-azha      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}

// int main(void)
// {
// 	int a;
// 	int b;
// 	int div;
// 	int mod;

// 	a=100;
// 	b=20;
// 	ft_div_mod(a, b, &div, &mod);
// 	printf("%d\n", div);
// 	printf("%d", mod);
// 	return (0);
// }