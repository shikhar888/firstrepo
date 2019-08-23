import java.util.*;
public class grading
{
    public static void main(String args[])
    {
        Scanner sc=new Scanner(System.in);
        int n,i,cnt;
        int grade[] = new int[100];
        n=sc.nextInt();
        for(i=0;i<n;i++)
        {
            grade[i]=sc.nextInt();
        }
        for(i=0;i<n;i++)
        {   
            cnt=0;
            if(grade[i]>=38)
            {
                cnt=5-(grade[i]%5);
                if(cnt<3)
                {
                    grade[i]=grade[i]+cnt;
                }
            }
        }
        for(i=0;i<n;i++)
        {
            System.out.println(grade[i]);
        }
    }
}
