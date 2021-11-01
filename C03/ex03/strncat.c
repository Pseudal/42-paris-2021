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
