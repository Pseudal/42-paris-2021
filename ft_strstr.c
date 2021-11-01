char	*ft_strstr(char *str, char *to_find)
{
	int i;
	int x;

	i = 0;
	if (*to_find == '\0')
		return (str);
	while (str[i] != '\0')
	{
		j = 0;
		while (str[i + x] == to_find[x])
		{
			j++;
			if (to_find[x] == '\0')
				return (&str[i]);
		}
		i++;
	}
	return (0);
}
