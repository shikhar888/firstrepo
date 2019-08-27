import java.util.*;
public class rotation
{
    public static void main(String[] args)
    {
        Scanner sc=new Scanner(System.in);
        int i,j,n,d;
        n=sc.nextInt();
        d=sc.nextInt();
        int a[]=new int[n];
        for(i=0;i<n;i++)
        {
            a[i]=sc.nextInt();
        }
        for(i=0;i<d;i++)
        {
            int temp=a[0];
            for(j=0;j<n-1;j++)
            {
                 a[j]=a[j+1];
            }
            a[j]=temp;
        }
        for(i=0;i<n;i++)
        {
            System.out.print(a[i]+" ");
        }
    }
}
