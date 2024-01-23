#include<stdio.h>

int main()
{
    int num;
    int ans=0;

    printf("Enter the last natural number you want the sum of \n");
    scanf("%d",&num);

    ans = (num*num + num)/2;
    
    printf("sum of first %d natural numbers is :%d\n",num,ans);
    return 0;
}