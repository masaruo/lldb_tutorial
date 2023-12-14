#include <stdlib.h>
#include <string.h>
#include <stdio.h>

static int	ft_utils(char *s)
{
	int i = 0;
	int num_spaces = 0;

	while (s[i])
	{
		if (s[i] == ' ')
		{
			num_spaces++;
			s[i] = '\0';
		}
		i++;
	}
	return (num_spaces);
}

char	**ft_split_by_space(char *s)
{
	char	**res;
	int		i = 0;
	int		j = 0;
	int	const number_of_spaces = ft_utils(s);

	res = malloc(sizeof(char *) * (number_of_spaces + 2));
	while (i < number_of_spaces)
	{

		strcpy(res[i], &s[j]);
		j += strlen(&s[j]);
		i++;
	}
	res[i] = NULL;
	return (res);
}

int main(void)
{
	char	**res;
	int		i = 0;

	res = ft_split_by_space("hello world from 42 tokyo");
	while (res[i])
	{
		printf("[%s]\n", res[i]);
		i++;
	}
	return (0);
}
