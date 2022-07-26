/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   rush00.c                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: ial-azha <ial-azha@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/07/09 12:44:56 by ial-azha      #+#    #+#                 */
/*   Updated: 2022/07/09 15:37:43 by ial-azha      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

//Notes for the Rush Group
//if w=0 or x and y=0, write "o", +1
//if w = any other number and h =0 or y, write "-"

//else w=- or x and h is another number, write "|"
//if w and y any other number, write "| |" or " "

//for if and else a new function might be needed that shows the wdith and height.
//if and else has to be brackets (see Imad notebook)
#define CORNER 'o'

void	ft_putchar(char c);

void	rush(int x, int y)
{

	int x_c;
	int y_c;

	if (x < 1 || y < 1)
		return ;
	y_c = 1;
	while (y_c <= y)
	{
		x_c = 1;
		while (x_c <= x)
		{
			if ((x_c > 1 && x_c < x) && (y_c > 1 && y_c < y))
				ft_putchar(' ');
			else if ((x_c > 1 && x_c < x) && (y_c == 1 || y_c == y))
				ft_putchar('-');
			else if ((y_c > 1 && y_c < y) && (x_c == 1 || x_c == x))
				ft_putchar('|');
			else
				ft_putchar(CORNER);
			x_c++;
		}
		ft_putchar('\n');
		y_c++;
	}
}