#include <stdio.h>

void num2text(int num);
int main()
{
    int number,a=0;
    int n=1000000000;
    printf("Enter a positive number:");
    scanf("%d",&number);

    /*Checking for leading zeros*/
    while(!a){
        a=number/n;
        if(a==0){
            n=n/10;
        }
    }

    while(n){
        a=number/n;
        num2text(a);
        number = number % n;
        n=n/10;
    }
    return 0;
}

void num2text(int num){
    switch(num){
    case 0:
        printf("zero ");break;
    case 1:
        printf("one ");break;
    case 2:
        printf("two ");break;
    case 3:
        printf("three ");break;
    case 4:
        printf("four ");break;
    case 5:
        printf("five ");break;
    case 6:
        printf("six ");break;
    case 7:
        printf("seven ");break;
    case 8:
        printf("eight ");break;
    case 9:
        printf("nine ");break;
    default:
        printf("NULL ");break;
    }
}
