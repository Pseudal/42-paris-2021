/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agarnier <agarnier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/17 17:27:29 by agarnier          #+#    #+#             */
/*   Updated: 2021/10/17 17:27:36 by agarnier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	addline(char first, char middle, char last, int x)
{
	ft_putchar(first);
	while (x-- > 2)
		ft_putchar(middle);
	if (x == 1)
		ft_putchar(last);
	ft_putchar('\n');
}

void	rush(int x, int y)
{
	if (x == 0 && y == 0)
		ft_putchar(' ');
	addline('A', 'B', 'C', x);
	while (y-- > 2)
		addline('B', ' ', 'B', x);
	if (y == 1)
		addline('C', 'B', 'A', x);
}

int	main(void)
{
	rush(5, 5);
	return (0);
}
