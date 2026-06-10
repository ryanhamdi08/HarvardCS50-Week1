#include <stdio.h>
#include <stdbool.h>

bool checkSum(long num);

int main(){
    
    long num;
    printf("Number: ");
    scanf("%ld", &num);
    
    long firstTwo = num;
    int length = 2;
    while(firstTwo > 100){
        firstTwo/=10;
        length++;
    }
    
    if(!checkSum(num)){
        printf("INVALID");
    }
    else if(length == 15 && (firstTwo == 34 || firstTwo == 37)){
        printf("AMEX");
    }
    else if(length == 16 && (firstTwo >= 51 || firstTwo <= 55)){
        printf("MASTERCARD");
    }
    else if((length == 16 || length == 13) && (firstTwo / 10 == 4)){
        printf("VISA");
    }
    else{
        printf("INVALID2");
    }
}

bool checkSum(long num){
    int total = 0;
    printf("Number Initial: %ld\n", num);
    bool alternate = false;
    
    while(num > 0){
        int digit = num % 10;

        if(alternate){
            digit *= 2;
            total += digit % 10 + digit / 10;
        }
        else{
            total += digit;
        }
       
        num /= 10;
        alternate = !alternate;
    }
    
    return total % 10 == 0;
}