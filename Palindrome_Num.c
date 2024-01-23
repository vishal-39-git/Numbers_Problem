#include<stdio.h>

int Palindrome_Num(int num)
{
    int num2=num;
    int ans=0,temp;

    while (num2 != 0)
    {
        temp = num2 % 10;
        ans = ans * 10 + temp;
        num2 = num2 / 10;
    }
    if(num == ans)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int main()
{
    int n1,n2,ret;

    printf("Enter the range to display palindrome numbers\n");
    scanf("%d%d",&n1,&n2);

    for(int i=n1;i<=n2;i++)
    {
        ret = Palindrome_Num(i);

        if(ret == 1)
        {
            printf("%d\t",i);
        }
    }

    return 0;
}