#include <stdio.h>

int main() {
    int num, i;
    int isPrime = 1;

    
    printf("Enter a number: ");
    scanf("%d", &num);

    
    if (num > 0)
        printf("The number is Positive.\n");
    else if (num < 0)
        printf("The number is Negative.\n");
    else
        printf("The number is Zero.\n");

    
    if (num % 2 == 0)
        printf("The number is Even.\n");
    else
        printf("The number is Odd.\n");

    
    if (num <= 1) {
        isPrime = 0;
    } else {
        for (i = 2; i <= num / 2; i++) {
            if (num % i == 0) {
                isPrime = 0;
                break;
            }
        }
    }

    if (isPrime)
        printf("The number is Prime.\n");
    else
        printf("The number is Not Prime.\n");

    return 0;
