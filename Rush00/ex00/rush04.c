/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush04.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agarnier <agarnier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/17 18:34:04 by agarnier          #+#    #+#             */
/*   Updated: 2021/10/17 18:34:13 by agarnier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

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
