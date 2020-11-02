#include <stdio.h>

char *ft_strlowcase(char *str);

int main()
{
  char str[10] = "adfAdF:s";
  printf("%s", ft_strlowcase(str));
}

