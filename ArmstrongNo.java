import java.util.*;

public class ArmstrongNo{

    public int CheckNo(int n1){
        int num=n1;
        int cnt=0;
        int ans=0;
        int ans2=0;
        int ans3=0;

            while(num != 0)
            {
                num = num/10;
                cnt++;
            }
            num=n1;

             while(num != 0)
            {
                ans=0;
                ans = num%10;
                num = num/10;
                int temp=ans;
                for(int i=1;i<=cnt-1;i++)
                {
                    ans=ans*temp;
                }
                ans2=ans2+ans;
            }

            return ans2;
            
    }
    public static void main(String args[]){
        Scanner sc=new Scanner(System.in);

        System.out.println("Enter the number");
        int num = sc.nextInt();
        int ret=0;

        ArmstrongNo obj=new ArmstrongNo();

        ret = obj.CheckNo(num);
      
        if(ret==num)
        {
            System.out.println("given number is armstrong number");
        }
        else
        {
             System.out.println("given number is not armstrong number");
        }
    }
}