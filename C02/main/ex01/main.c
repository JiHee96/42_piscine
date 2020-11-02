#include <string.h>
#include <stdio.h>

char *ft_strncpy(char *dest, char *src, unsigned int n);

int main()
{
	char str1[80] = "";
	char str2[80] = "gdfgdgf";

	int i;
	char *return_strncpy;
	for (i = 0; i < 15; i++)
	{
		return_strncpy = ft_strncpy(str1, str2, i);
		printf("my       [%d] > return: %s > %s\n", i, return_strncpy, str1);
	
		return_strncpy = strncpy(str1, str2, i);
		printf("original [%d] > return: %s > %s\n\n", i, return_strncpy, str1);
	}
	return (0);
}