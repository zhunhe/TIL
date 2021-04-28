/*
** KMP(Knuth–Morris–Pratt) algorithm
** time complexity: O(m + n)
** 
** Search a word in string using pi array
*/

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int	*get_pi(char *s, int len)
{
	int *pi;

	pi = (int *)malloc(sizeof(int) * len);
	for (int i = 1, j = 0; i < len; ++i)
	{
		while (j > 0 && s[i] != s[j])
			j = pi[j - 1];
		if (s[i] == s[j])
			pi[i] = ++j;
	}
	return (pi);
}

void	strstr_KMP(char *text, char *pattern)
{
	int *pi = get_pi(pattern, strlen(pattern));
	char *origin = text;
	char *patterns = pattern;

	for (int i = 0, j = 0; i < strlen(text); ++i)
	{
		while (j > 0 && origin[i] != patterns[j])
			j = pi[j - 1];

		if (origin[i] == patterns[j])
		{
			if (j == strlen(pattern) - 1)
			{
				printf("Find %s! idx: %lu, %s\n"
						, pattern
						, (i - strlen(pattern) + 1)
						, (text + i - strlen(pattern) + 1));
				j = pi[j];
			}
			else
				++j;
		}
	}
	free(pi);
}

int	main(void)
{
	char s1[] = "this is test code to test KMP";
	char s2[] = "te";

	strstr_KMP(s1, s2);

	return (0);
}
