/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agarnier <agarnier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/14 20:11:59 by agarnier          #+#    #+#             */
/*   Updated: 2021/10/14 20:12:14 by agarnier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_alphabet(void)
{
	char	letter;

	letter = '1';
	while (letter <= '9')
	{
		write(1, &letter, 1);
		letter++;
	}
}
int	main(void)
{
	ft_print_alphabet();
	return (0);
}
