#include <stdio.h>

int ft_str_is_pritable(char *str);

int main()
{
	char str[10]="\xff";
	printf("%d",ft_str_is_printable(str));
}


