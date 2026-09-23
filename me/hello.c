#include<stdio.h>
int main(void) {
        printf("what's your name? ");
        char name[100];
        scanf("%s",  name);
        printf("hello, ");
        printf("%s\n", name);
}