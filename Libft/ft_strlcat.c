#include <unistd.h>

int ft_strlen(const char *s)
{
	int	i;
	i = 0;
	
	while(s[i])
	  i++;

	return (i);
}

size_t ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	t1;
	size_t	t2;

	i = 0;
	t1 = ft_strlen(dst);
	t2 = ft_strlen(src);
	if (size - 1 <= t1)
		return (t2 + size);
	while (t1 + i < size - 1)
	{
		dst[t1 + i] = src[i];
		i++;
	}
	dst[t1 + i] = '\0';
	return (t1 + t2);
}
