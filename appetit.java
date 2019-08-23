import java.util.*;
public class bon_appetit
{
    public static void main(String args[])
    {
        Scanner sc=new Scanner(System.in);
        int  n,k,i,b,cnt=0;
        int bill[]=new int[1000000];
        n=sc.nextInt();
        k=sc.nextInt();
        for(i=0;i<n;i++)
        {
            bill[i]=sc.nextInt();
        }
        b=sc.nextInt();
        for(i=0;i<n;i++)
        {
           cnt=cnt+bill[i];
        }
        cnt=cnt-bill[k];
        cnt=cnt/2;
        if((b-cnt)>0)
        {
           System.out.println(b-cnt);
        }
        else
        {
            System.out.println("Bon Appetit");
        }
    }
}
