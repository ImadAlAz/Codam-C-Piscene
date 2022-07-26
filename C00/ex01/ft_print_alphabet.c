/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_print_alphabet.c                                :+:    :+:            */
/*                                                     +:+                    */
/*   By: ial-azha <ial-azha@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/07/09 17:33:31 by ial-azha      #+#    #+#                 */
/*   Updated: 2022/07/12 23:11:53 by ial-azha      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_alphabet(void)
{
	int		a;
	char	c;

	a = 97 ;
	while (a <= 122)
	{
		c = a;
		ft_putchar(c);
		a++;
	}
}
