#include <stdio.h>
#include <string.h>

#define STR1 ""
#define STR2 ""

unsigned int  ft_strlcpy(char *dest, char *src, unsigned int size);

int main()
{
	char str1[80] = "";
	char str2[80] = "";

	int i;
	int return_strlcpy;
	for (i = 0; i < 15; i++)
	{
		strcpy(str1, STR1);
		strcpy(str2, STR2);
		return_strlcpy = ft_strlcpy(str1, str2, i);
		printf("my       [%d] > return: %d > %s\n", i, return_strlcpy, str1);
		strcpy(str1, STR1);
		strcpy(str2, STR2);
		return_strlcpy = strlcpy(str1, str2, i);
		printf("original [%d] > return: %d > %s\n\n", i, return_strlcpy, str1);
	}
	return (0);
}