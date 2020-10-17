#include <stdio.h>
#include <string.h>

int				main()
{
	extern int ft_strlen();
	extern char *ft_strcpy();
	extern int ft_strcmp();
	extern char *ft_strdup();

	char	h[4];

	for (int i = 0; i < 4; i++)
		h[i] = 'o';
	h[2] = 'e';
	//printf("%d", ft_strlen("e1eqwr"));
	//printf("%s\n", ft_strcpy(h, &h[2]));
	//printf("%s", strcpy(h, &h[1]));
	printf("%d", ft_strcmp("e1eqwr", "e1f"));
	//printf("%d", strcmp("e1eqwr", "e1f"));
	char	*tmp = ft_strdup("e1eqwr");
	printf("%s", tmp);
	return (1);
}
