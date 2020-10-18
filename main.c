#include <stdio.h>
#include <string.h>
#include <unistd.h>
#include <errno.h>
#include <fcntl.h>

int				error_msg(char *msg)
{
	if (errno)
		perror(msg);
	return (0);
}

int				main()
{
	extern size_t ft_strlen(const char *s);
	extern char *ft_strcpy(char *dest, const char *src);
	extern int ft_strcmp(const char *s1, const char *s2);
	extern char *ft_strdup(const char *s);
	extern ssize_t ft_read(int fd, const void *buf, size_t count);
	extern ssize_t ft_write(int fd, const void *buf, size_t count);

	char	buf[26];
	int		tmp[2];
	char	*str;

	if (pipe(tmp) < 0)
		return (error_msg("Open error"));
	printf("%ld\n", ft_write(tmp[1], "Si vis pacem, para bellum", 25));
	error_msg("hh");
	printf("%ld\n", ft_read(tmp[0], buf, 25));
	buf[25] = 0;
	error_msg("hh");
	printf("%s\n", buf);
	printf("%ld\n", ft_strlen(buf));
	printf("%s\n", ft_strcpy(buf, "Hello"));
	printf("%d\n", ft_strcmp(buf, "Hello"));
	str = ft_strdup(buf);
	printf("%s\n", str);
	printf("%s\n", buf);
	close(tmp[1]);
	close(tmp[0]);
	printf("|Original|\n");
	if (pipe(tmp) < 0)
		return (error_msg("Open error"));
	printf("%ld\n", write(tmp[1], "Si vis pacem, para bellum", 25));
	error_msg("hh");
	printf("%ld\n", read(tmp[0], buf, 25));
	buf[25] = 0;
	error_msg("hh");
	printf("%s\n", buf);
	printf("%ld\n", strlen(buf));
	printf("%s\n", strcpy(buf, "Hello"));
	printf("%d\n", strcmp(buf, "Hello"));
	str = strdup(buf);
	printf("%s\n", str);
	printf("%s\n", buf);
	close(tmp[1]);
	close(tmp[0]);
	return (1);
}
