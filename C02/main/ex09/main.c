#include <stdio.h>

char *ft_strcapitalize(char *str);

int main()
{
  char str[100] = "salut, comment tu vas ? 42mots quarante-deux; cinquante+et+un";
  printf("%s", ft_strcapitalize(str));
}

