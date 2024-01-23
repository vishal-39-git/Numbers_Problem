#include<stdio.h>

int Reverse_Num(int num)
{
    int ans=0,temp=0;

    while(num != 0)
    {
        temp = num % 10;
        ans = ans * 10 + temp;
        num = num / 10;
    }
    return ans;
}

int main()
{
    int num;

    printf("Enter the number \n");
    scanf("%d",&num);

    int ret = Reverse_Num(num);

    printf("number after reverse %d \n",ret);
    return 0;
}