#include<stdio.h>

void checkPrime(int num)
{
    for(int i=2;i<=num/2;i++)
    {
        if(num % i == 0)
        {
            printf("Given number is not prime number\n");
            return;
        }
    }
    printf("Given number is prime number\n");
}
int main()
{
    int num;
    
    printf("Enter the number\n");
    scanf("%d",&num);

    checkPrime(num);

    return 0;
}