#include <stdio.h>
#include <string.h>
#include <unistd.h>
#include <errno.h>
#include <error.h>

int				error_msg(char *msg)
{
	if (errno)
		perror(msg);
	return (0);
}



int				main()
{
	extern int ft_strlen();
	extern char *ft_strcpy();
	extern int ft_strcmp();
	extern char *ft_strdup();
	extern size_t ft_read();

char	buf[4];

	/*for (int i = 0; i < 4; i++)
		h[i] = 'o';
	h[2] = 'e';*/
	//printf("%d", ft_strlen("e1eqwr"));
	//printf("%s\n", ft_strcpy(h, &h[2]));
	//printf("%s", strcpy(h, &h[1]));
	//printf("%d", ft_strcmp("e1eqwr", "e1f"));
	//printf("%d", strcmp("e1eqwr", "e1f"));
	char	*tmp = ft_strdup("e1eqwr");
	//printf("%s", tmp);
	printf("%ld", ft_read(0, buf, 3));
	//printf("%ld", read(3, h, 3));
	error_msg("hh");
	printf("%s", buf);
	return (1);
}
