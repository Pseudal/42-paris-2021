/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   count.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agarnier <agarnier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/24 12:34:02 by agarnier          #+#    #+#             */
/*   Updated: 2021/10/24 12:34:06 by agarnier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	count_view_up(int *tab_in, int n)
{
	int	count;
	int	i;
	int	max;

	max = 0;
	count = 0;
	i = n % 4;
	while (i <= n)
	{
		if (max < tab_in[i])
		{
			max = tab_in[i];
			count++;
		}
		i += 4;
	}
	return (count);
}

int	count_view_down(int *tab_in, int n)
{
	int	count;
	int	i;
	int	max;

	max = 0;
	count = 0;
	i = n;
	while (i >= (n % 4))
	{
		if (max < tab_in[i])
		{
			max = tab_in[i];
			count++;
		}
		i -= 4;
	}
	return (count);
}

int	count_view_left(int *tab_in, int n)
{
	int	count;
	int	i;
	int	max;

	max = 0;
	count = 0;
	i = n - 3;
	while (i <= n)
	{
		if (max < tab_in[i])
		{
			max = tab_in[i];
			count++;
		}
		i++;
	}
	return (count);
}

int	count_view_right(int *tab_in, int n)
{
	int	count;
	int	i;
	int	max;

	max = 0;
	count = 0;
	i = n;
	while (i >= n - 3)
	{
		if (max < tab_in[i])
		{
			max = tab_in[i];
			count++;
		}
		i--;
	}
	return (count);
}
