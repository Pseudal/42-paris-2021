/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strncat.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agarnier <agarnier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/01 13:19:56 by agarnier          #+#    #+#             */
/*   Updated: 2021/11/01 13:20:00 by agarnier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	j;
	int				i;

	i = 0;
	j = 0;
	while (dest[i] != '\0' && j < nb)
	{
		i++;
	}
	while (src[j] != '\0' && j != nb)
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	return (dest);
}
