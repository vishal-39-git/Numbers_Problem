#include<stdio.h>

int Factorial(int num)
{
    int ans =1;

    for(int i=2;i<=num;i++)
    {
        ans = ans*i;
    }
    return ans;
}

int main()
{
    int num;

    printf("Enter the number\n");
    scanf("%d",&num);

    int ret = Factorial(num);

    printf("Factorial of %d : %d \n",num,ret);
    return 0;
}