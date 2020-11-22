#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>
#include <unistd.h>
#include <fcntl.h>
#include "libft.h"

void	verif_ft_strlen();
void	verif_ft_atoi();
void	verif_ft_bzero();
void	verif_ft_calloc();
void	verif_isalnum();
void	verif_ft_isalpha();
void	verif_ft_isascii();
void	verif_ft_isdigit();
void	verif_ft_itoa();
void	verif_ft_split();
void	verif_ft_strchr();
void	verif_ft_strdup();
void	verif_ft_strjoin();
void	verif_ft_strlcat();
void	verif_ft_strlcpy();
void	verif_ft_strmapi();
void	verif_ft_strncmp();
void	verif_ft_strnstr();
void	verif_ft_strrchr();
void	verif_ft_strtrim();
void	verif_ft_substr();
void	verif_ft_tolower();
void	verif_ft_toupper();
void	verif_ft_memccpy();
void	verif_ft_memchr();
void	verif_ft_memcpy();
void	verif_ft_memmove();
void	verif_ft_memset();
void	verif_ft_memcmp();
void	verif_ft_putchar_fd();
void	verif_ft_putend_fd();
void 	verif_ft_putnbr_fd();
void	verif_ft_putstr_fd();

int		main(void)
{
	verif_ft_atoi();
	verif_ft_bzero();
	verif_ft_calloc();
	verif_isalnum();
	verif_ft_isalpha();
	verif_ft_isascii();
	verif_ft_isdigit();
	verif_ft_itoa();
	verif_ft_memccpy();
	verif_ft_memchr();
	verif_ft_memcmp();
	verif_ft_memcpy();
	verif_ft_memmove();
	verif_ft_memset();
	verif_ft_putchar_fd();
	verif_ft_putend_fd();
	verif_ft_putnbr_fd();
	verif_ft_putstr_fd();
	verif_ft_split();
	verif_ft_strchr();
	verif_ft_strdup();
	verif_ft_strjoin();
	verif_ft_strlcat();
	verif_ft_strlcpy();
	verif_ft_strlen();
	verif_ft_strmapi();
	verif_ft_strncmp();
	verif_ft_strnstr();
	verif_ft_strrchr();
 	verif_ft_strtrim();
	verif_ft_substr();
	verif_ft_tolower();
	verif_ft_toupper();
	
	return (0);
}

void	verif_ft_memcmp()
{
	int size = 10;
	char *s1 = malloc(sizeof(char) * size);
	char *s2 = malloc(sizeof(char) * size);
	memset(s1, 0, size);
	memset(s2, 1, size);
	if (ft_memcmp(s1, s2, size) != 0)
	{
		printf("OK => ft_memcmp\n");
		return ;
	}
	printf("ERROR => ft_memcmp\n");
}

void	verif_ft_memccpy()
{
	int size = 10;
	int	max = 5;
	int c = 4;
	char *src = malloc(sizeof(char) * size);
	char *dist = malloc(sizeof(char) * size);
	char *res = malloc(sizeof(char) * size);
	memset(src, 1, size);
	ft_memccpy(dist, src, c, max);
	int i = 0;
	while (i < max)
	{
		if (src[i] != dist[i])
		{
			printf("ERROR => ft_memccpy\n");
			return ;
		}
		i++;
	}
	printf("OK => ft_memccpy\n");
}

void	verif_ft_memchr()
{
	int size = 10;
	int c = 0;
	char *str = malloc(sizeof(char) * size);
	memset(str, 0, size);
	ft_memchr(str, c, size);
	if (ft_memchr(str, c, size))
	{
		printf("OK => ft_memchr\n");
		return ;
	}
	printf("ERROR => ft_memchr\n");
}

void	verif_ft_memcpy()
{
	int size = 10;
	int	max = 5;
	char *src = malloc(sizeof(char) * size);
	char *dist = malloc(sizeof(char) * size);
	memset(src, 1, size);
	ft_memcpy(dist, src, max);
	int i = 0;
	while (i < max)
	{
		if (src[i] != dist[i])
		{
			printf("ERROR => ft_memcpy\n");
			return ;
		}
		i++;
	}
	printf("OK => ft_memcpy\n");
}

void	verif_ft_memmove()
{
	int size = 10;
	char *src = malloc(sizeof(char) * (size + 1));
	char *dest = malloc(sizeof(char) * (size + 1));
	memset(src, 4, size);
	ft_memmove(dest, src, size);
	int i = 0;
	while (i <= size)
	{
		if (src[i] != dest[i])
		{
			printf("ERROR => ft_memmove\n");
			return ;
		}
		i++;
	}
	printf("OK => ft_memmove\n");
}

void	verif_ft_memset()
{
	char c = 1;
	int size = 10;
	char *str = malloc(sizeof(char) * size);
	char *res = malloc(sizeof(char) * size);
	unsigned char a = (unsigned char) c;
	ft_memset(str, c, size);
	memset(res, c, size);
	int i = 0;
	while (i < size)
	{
		if (str[i] != res[i])
		{
			printf("ERROR => ft_memset\n");
			return ;
		}
		i++;
	}
	printf("OK => ft_memset\n");
}

void	verif_ft_putchar_fd()
{
	char	c = 'a';
	int		fd;
	int		fd2;
	char	a[3];
	int		res;
	fd = open("test_putchar_fd", O_WRONLY | O_CREAT, S_IRWXU);
	ft_putchar_fd(c, fd);
	fd2 = open("test_putchar_fd", O_RDONLY);
	res = read(fd2, a, 3);
	a[res] = '\0';
	if (strcmp(a, "a") == 0)
	{
		printf("OK => ft_putchar_fd\n");
		return ;
	}
	printf("ERROR => ft_putchar_fd\n");
}

void	verif_ft_putend_fd()
{
	char	*c = "Hello";
	int		fd;
	int		fd2;
	char	a[10];
	int		res;
	fd = open("test_putend_fd", O_WRONLY | O_CREAT, S_IRWXU);
	ft_putendl_fd(c, fd);
	fd2 = open("test_putend_fd", O_RDONLY);
	res = read(fd2, a, 10);
	a[res] = '\0';
	if (strcmp(a, "Hello\n") == 0)
	{
		printf("OK => ft_putend_fd\n");
		return ;
	}
	printf("ERROR => ft_putend_fd\n");
}

void	verif_ft_putnbr_fd()
{
	int		n = 435;
	char	res[10];
	int fd = open("test_ft_putnbr_fd", O_RDWR | O_CREAT, S_IRWXU);
	ft_putnbr_fd(n, fd);
	int fd2 = open("test_ft_putnbr_fd", O_RDONLY);
	int req = read(fd2, res, 10);
	res[req] = '\0';
	if (strcmp(res, "435") == 0)
	{
		printf("OK => ft_putnbr\n");
		return ;
	}
	printf("ERROR => ft_putnbr\n");
}

void	verif_ft_putstr_fd()
{
	char *str = "Salut la compagnie";
	char res[100];
	int fd = open("test_ft_putstr_fd", O_WRONLY | O_CREAT, S_IRWXU);
	ft_putstr_fd(str, fd);
	int fd2 = open("test_ft_putstr_fd", O_RDONLY);
	int req = read(fd2, res, 100);
	res[req] = '\0';
	if (strcmp(res, str) == 0)
	{
		printf("OK => ft_putstr_fd\n");
		return ;
	}
	printf("ERROR => ft_putstr_fd");
}

void	verif_ft_toupper()
{
	char c = 'a';
	int n = (int) c;
	if (ft_toupper(n) == 65)
	{
		printf("OK => ft_upper\n");
		return ;
	}
	printf("ERROR => ft_upper\n");
}

void	verif_ft_tolower()
{
	char c = 'A';
	int n = (int) c;
	if (ft_tolower(n) == 97)
	{
		printf("OK => ft_lower\n");
		return ;
	}
	printf("ERROR => ft_lower\n");
}

void	verif_ft_substr()
{
	char *str = "Hello, ceci est un test";
	if (strcmp(ft_substr(str, 7, 10), "ceci") == 0)
	{
		printf("OK => ft_substr\n");
		return ;
	}
	printf("ERROR => ft_substr\n");
}

void	verif_ft_strtrim()
{
	char *str = "!!Hello comment!! ça va ?!!";
	char *set = "!!";
	if (strcmp(ft_strtrim(str, set), "Hello comment!! ça va ?") == 0)
	{
		printf("OK => ft_strtrim\n");
		return ;
	}
	printf("ERROR => ft_strtrim");
}

void	verif_ft_strrchr()
{
	char *s1 = "verif ft strrchr";
	char c = 't';
	if (strcmp(ft_strrchr(s1, c), strrchr(s1, c)) == 0)
	{
		printf("OK => ft_strrchr\n");
		return ;
	}
	printf("ERROR => ft_strrchr\n");
}

void	verif_ft_strnstr()
{
	char *s1 = "Salut la compagnie";
	char *s2 = "la";
	if (ft_strnstr(s1, s2, 5))
	{
		printf("ERROR => type 1 ft_strnstr\n");
		return ;
	}
	if (!ft_strnstr(s1, s2, 10))
	{
		printf("ERROR => type 2 ft_strnstr\n");
		return ;
	}
	printf("OK => ft_strnstr\n");
}

void	verif_ft_strncmp()
{
	char *s1 = "Salut la compagnie";
	char *s2 = "Salut, comment va ?";
	if (ft_strncmp(s1, s2, 5) == 0)
	{
		printf("OK => ft_strncmp\n");
		return ;
	}
	printf("ERROR => ft_strncmp\n");
}

char	ft_to_apply(unsigned int n, char c)
{
	return toupper(c);
}

void	verif_ft_strmapi()
{
	char *str = "hello";
	char *res = ft_strmapi(str, &ft_to_apply);
	if (strcmp(res, "HELLO") == 0)
	{
		printf("OK => ft_strmapi\n");
		return ;
	}
	printf("ERROR => ft_strmapi\n");
}

void	verif_ft_strlcpy()
{
	char *dest;
	char *src = "Salut";
	dest = malloc(sizeof(char) * (10 + 1));
	ft_strlcpy(dest, src, 1);
	if (strcmp(dest, "Salu"))
	{
		printf("OK => ft_strlcpy\n");
		return ;
	}
	printf("ERROR => ft_strlcpy\n");
}

void	verif_ft_strlcat()
{
	char *s1;

	s1 = malloc(sizeof(char) * 6);
	s1[0] = 'S';
	s1[1] = 'a';
	s1[2] = 'l';
	char *s2 = "ut";
	ft_strlcat(s1, s2, 5);
	if (strcmp(s1, "Salu") == 0)
	{
		printf("OK => ft_strlcat\n");
		return ;
	}
	printf("ERROR => ft_strlcat\n");
}

void	verif_ft_strjoin(){
	char *s1 = "Sal";
	char *s2 = "ut";
	char *res = ft_strjoin(s1, s2);
	if (strcmp(res, "Salut") == 0)
	{
		printf("OK => ft_strjoin\n");
		return ;
	}
	printf("ERROR => ft_strjoin\n");
}

void	verif_ft_strdup()
{
	char *str = "Salut la compagnie";
	char *str2 = ft_strdup(str);
	if (strcmp(str, str2) != 0)
	{
		printf("ERROR type 1 for ft_strdup\n");
		return ;
	}
	if (&str[0] == &str[2])
	{
		printf("ERROR type 2 for ft_strdup\n");
		return ;
	}
	printf("OK => ft_strdup\n");
}

void	verif_ft_strchr()
{
	const char *str = "Salut la compagnie";
	char a = 's';
	char b = '\0';
	char *str_a = ft_strchr(str, a);
	char *str_b = ft_strchr(str, b);
	if (str_a[0] != a)
	{
		printf("ERROR type 1 for ft_strchr\n");
		return ;
	}
	if (str_b[0] != b)
	{
		printf("ERROR type 2 for ft_strchr\n");
		return ;
	}
	printf("OK => ft_strchr\n");
}

void	verif_ft_split()
{
	char *str = "Salut  la  compagnie";
	char c = ' ';
	char **s = ft_split(str, c);
	if (strcmp(s[0], "Salut") != 0)
	{
		printf("ERROR type 1 => ft_split\n");
		return ;
	}
	if (strcmp(s[1], "la") != 0)
	{
		printf("ERROR type 2 => ft_split\n");
		return ;
	}
	if (strcmp(s[2], "compagnie") != 0)
	{
		printf("ERROR type 3 => ft_split\n");
		return ;
	}
	printf("OK => ft_split\n");
}

void	verif_ft_itoa()
{
	int n = -4239;
	if (strcmp(ft_itoa(n), "-4239") != 0)
	{
		printf("ERROR => ft_itoa\n");
		return ;
	}
	printf("OK => ft_itoa\n");
}

void	verif_ft_isdigit()
{
	char *str = "Bonjour 738 !!";
	int i = 0;

	while (str[i])
	{
		if (ft_isdigit(str[i]) != isdigit(str[i]))
		{
			printf("ERROR for ft_isdigit\n");
			return ;
		}
		i++;
	}
	printf("OK => ft_isdigit\n");
}

void	verif_ft_isascii()
{
	char *str = "Bonjour 738 !!";
	int i = 0;

	while (str[i])
	{
		if (ft_isascii(str[i]) != isascii(str[i]))
		{
			printf("ERROR for ft_isascii\n");
			return ;
		}
		i++;
	}
	printf("OK => ft_isascii\n");
}

void	verif_ft_isalpha()
{
	char *str = "Bonjour 738 !!";
	int i = 0;

	while (str[i])
	{
		if (ft_isalpha(str[i]) != isalpha(str[i]))
		{
			printf("ERROR for ft_isalpha\n");
			return ;
		}
		i++;
	}
	printf("OK => ft_isalpha\n");
}

void	verif_isalnum()
{
	char *str = "Bonjour 738 !!";
	int i = 0;

	while (str[i])
	{
		if (ft_isalnum(str[i]) != isalnum(str[i]))
		{
			printf("ERROR => ft_isalnum\n");
			return ;
		}
		i++;
	}
	printf("OK => ft_isalnum\n");
}

void	verif_ft_calloc()
{
	int size = 10;
	char *s = ft_calloc(size, size);
	int i = 0;
	while (i <= size)
	{
		if (s[i] != 0)
		{
			printf("ERROR type 1 => ft_calloc\n");
			return ;
		}
		i++;
	}
	i--;
	if (i != size)
	{
		printf("ERROR type 2 => ft_calloc\n");
		return ;
	}
	printf("OK => ft_calloc\n");
}

void	verif_ft_bzero()
{
	int size = 10;
	void *str = (char *)malloc(sizeof(char) * size);
	ft_bzero(str, size);
	char *s = (char *)str;
	int i = 0;
	while (i <= size)
	{
		if (s[i] != 0)
		{
			printf("ERROR => type 1 ft_bzero\n");
			return ;
		}
		i++;
	}
	i--;
	if (i != size)
	{
		printf("%d %d", i, size);
		printf("ERROR => type 2: ft_bzero\n");
		return ;
	}
	printf("OK => ft_bzero\n");
}

void	verif_ft_atoi()
{
	char *str = "  	 -+--439S";
	if (ft_atoi(str) == -439)
	{
		printf("OK => ft_atoi \n");
		return ;
	}
	printf("ERROR => ft_atoi");
}

void	verif_ft_strlen()
{
	char	*str = "Bonjour";
	if (ft_strlen(str) == strlen(str))
	{
		printf("OK => ft_strlen\n");
		return ;
	}
	printf("ERROR => ft_strlen");
}