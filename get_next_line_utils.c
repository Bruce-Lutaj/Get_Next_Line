#include "get_next_line.h"

size_t	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str && str[i] != '\0')
		i++;
	return (i);
}

char	*ft_strchr(char *str, int c)
{
	int	i;

	i = 0;
	if (!str)
		return (NULL);
	while (str && str[i])
	{
		if (str[i] == c)
			return ((char *)&str[i]);
		i++;
	}
	return (NULL);
}

char	*ft_strjoin(char *s1, char *s2)
{
	size_t	len;
	size_t	s1len;
	size_t	i;
	size_t	j;
	char	*s;

	s1len = ft_strlen(s1);
	len = s1len + ft_strlen(s2);
	s = malloc(sizeof(char) * (len + 1));
	if (!s)
		return (NULL);
	i = -1;
	while (++i < s1len)
		s[i] = s1[i];
	j = -1;
	while (s2 && s2[++j])
		s[i + j] = s2[j];
	s[len] = '\0';
	free(s1);
	return (s);
}
