#include<stdio.h>
#include<string.h>
int main() {
    char str[10];
    scanf("%s",str); 
    char str1[10];
    scanf("%s",str1);
    strcat(str,str1);
    printf("%s",str);
}