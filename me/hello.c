#include <stdio.h>
int main(){
    char name[50];
    print("What is your name?\n");
    scanf("%s", name);
    printf("Hello %s", name);
}