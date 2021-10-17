/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agarnier <agarnier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/13 17:55:55 by agarnier          #+#    #+#             */
/*   Updated: 2021/10/14 16:59:42 by agarnier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_is_negative(int n)
{
	int	number;

	number = 2;
	if (number >= 0)
	{
		write(1, "P\n", 2);
	}	
	else
	{
		write(1, "N\n", 2);
	}
}
