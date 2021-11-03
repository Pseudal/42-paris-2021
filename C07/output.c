#include<stdlib.h>
char *ft_strjoin(int size, char **strs, char *sep)
{
	int	j;
	int	i;
	int     x;

	i = -1;
	j = 0;
	while ((*strs)[i])
		i++;
		while (strs[j])
			j++;
	x = malloc(sizeof(char) * i + 1);
	i = 0;
	if (x == NULL)
		return (0);
}


#include <stdio.h>

char *ft_strjoin(int size, char **strs, char *sep);

int	main(int argc, char **argv)
{
	printf("./ex03/output___said___this___is___a___success :\n");
	printf("%s\n",  ft_strjoin(argc, argv, "___"));
}
