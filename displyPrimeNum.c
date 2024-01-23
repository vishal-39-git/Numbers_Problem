#include<stdio.h>

void checkPrime(int num)
{
    for(int i=2;i<=num/2;i++)
    {
        if(num%i == 0)
        {
            return;
        }
    }
    printf("%d \n",num);
}

void displayPrime(int n1,int n2)
{
    for(int i=n1;i<=n2;i++)
    {
        checkPrime( i);
    }
}
int main()
{
int n1,n2;

printf("Enter the range to display prime numbers\n");
scanf("%d%d",&n1,&n2);

displayPrime(n1,n2);
    return 0;
}