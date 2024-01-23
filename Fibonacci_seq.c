#include<stdio.h>

void Get_Fibonacci_Num(int num)
{
    int a=0,b=1,c;

    printf("Fibonacci sequence\n");

    for(int i=0;i<=num;i++)
    {
        printf("%d\t",a);
        c = a + b;
        a = b;
        b = c;
    }

}

int main()
{
    int num;

    printf("Enter how many fibonacci numbers you want\n");
    scanf("%d",&num);
    
    Get_Fibonacci_Num(num);

    return 0;
}