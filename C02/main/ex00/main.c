#include <string.h>
#include <stdio.h>
char *ft_strcpy(char *dest, char *src);
int main()
{
    char s1[10] = "Hello";    // 크기가 10인 char형 배열을 선언하고 문자열 할당
    char s2[10];              // 크기가 10인 char형 배열을 선언

    ft_strcpy(s2, s1);        // s1의 문자열을 s2로 복사
    
    printf("%s\n", s2);    // Hello

    char s3[10] = "Hello";    // 크기가 10인 char형 배열을 선언하고 문자열 할당
    char s4[10];

    ft_strcpy(s3, s4);        // s1의 문자열을 s2로 복사
    
    printf("%s\n", s3);              // 크기가 10인 char형 배열을 선언
    return 0;
}
