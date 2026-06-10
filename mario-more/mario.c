#include <stdio.h>
int main(){
    int num;
    printf("How many layers?\n");
    scanf("%d", &num);
    for(int i = 1; i <= num; i++){
        
        //Beginning Spaces
        for(int j = num-i; j > 0; j--){
            printf(" ");
        }
        
        //First layer of stars
        for(int j = 1; j <= i; j++){
            printf("*");
        }
        
        //Middle space
        printf("  ");
        
        //Second layer of stars
        for(int j = 1; j <= i; j++){
            printf("*");
        }
      
        printf("\n");
    }
}