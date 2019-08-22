import java.util.*;
public class kangaroo
{
    public static void main(String args[])
    {
        Scanner sc=new Scanner(System.in);
        int x1,v1,x2,v2;
        x1=sc.nextInt();
        v1=sc.nextInt();
        x2=sc.nextInt();
        v2=sc.nextInt();
          
            
    if(x2>x1 && v1 > v2 && (x2 - x1) % (v1 - v2) == 0)
    {
        System.out.println("YES");
    }
    else if(x2<x1 && v1 < v2 && (x1 - x2) % (v2 - v1) == 0)
    {
        System.out.println("YES");
    }
    else
        System.out.println("NO");
    }
}
