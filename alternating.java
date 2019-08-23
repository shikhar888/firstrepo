import java.util.*;
public class alternating
{
    public static void main(String args[])
    {
        Scanner sc=new Scanner(System.in);
        int q,i,j,cnt;
        String s="";
        q=sc.nextInt();
        for(i=0;i<=q;i++)
        {
            s=sc.nextLine();
            cnt=0;
            for(j=0;j<(s.length()-1);j++)
            {
                if(s.charAt(j)==s.charAt(j+1))
                {
                    cnt++;
                }
            }
            System.out.println(cnt);
        }
    }
}
