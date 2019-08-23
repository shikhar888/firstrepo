import java.util.*;
public class leaderboard
{
    public static void main(String args[])
    {
        
        Scanner sc=new Scanner(System.in);
        int n,m,i,j,cnt=1;
        long temp;
        long scores[]=new long[10000000];
        long alice[]=new long[10000000];
        n=sc.nextInt();
        for(i=0;i<n;i++)
        {
            scores[i]=sc.nextLong();
        }
        
        
        m=sc.nextInt();
        for(i=0;i<m;i++)
        {
            alice[i]=sc.nextLong();
        }
        
        
        j=0;
        for(i=0;i<m;i++)
        {
            cnt=1;
            j=0;
            while(alice[i]<scores[j])
            {
                if(scores[j]!=scores[j+1])
                {
                    cnt++;
                    j++;
                }
                else
                {
                    j++;
                }
            }
            System.out.println(cnt);
        }

    }
}
