/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_is_negative.c                                   :+:    :+:            */
/*                                                     +:+                    */
/*   By: ial-azha <ial-azha@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/07/07 22:48:48 by ial-azha      #+#    #+#                 */
/*   Updated: 2022/07/13 20:55:05 by ial-azha      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_is_negative(int n)
{
	char	b;
	char	a;

	a = 'P';
	b = 'N';
	if (n >= 0)
	{
		(write (1, &a, 1));
	}
	else
	{
		(write (1, &b, 1));
	}
}

// int	main(void)
// {
// ft_is_negative(0);
// }