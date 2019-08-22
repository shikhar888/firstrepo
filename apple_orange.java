import java.util.*;
public class Solution {

    public static void main(String[] args) 
    {
        Scanner sc = new Scanner(System.in);
        int s = sc.nextInt();
        int t = sc.nextInt();
        int a = sc.nextInt();
        int b = sc.nextInt();
        int m = sc.nextInt();
        int n = sc.nextInt();
        int[] apple = new int[m];
        int count = 0;
        for(int i=0;i < m;i++)
        {
            apple[i] = sc.nextInt();
            if(apple[i] + a >= s && apple[i] + a <= t) 
            count++;
        }
        System.out.println(count);
        count = 0;
        int[] orange = new int[n];
        for(int i=0;i < n;i++){
            orange[i] = sc.nextInt();
            if(orange[i] +b >= s && orange[i] + b <= t)
            count++;
        }
        System.out.println(count);
    }
}
