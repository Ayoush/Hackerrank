import java.util.*;
import java.io.*;
import java.math.*;
public class ForJavaTesting{
    static Scanner s=new Scanner(System.in);
    public static void main(String[] args) {
        int t;
        t=s.nextInt();
        while(t-->0)
        {
            int a=s.nextInt();
            int b=s.nextInt();
            int n=s.nextInt();
            int sum=(int) (a+Math.pow(2, 0)*b);
            if(n!=1){
            System.out.print(sum+" ");
            }
            else{
            System.out.println(sum);
            }
            for(int i=1;i<n;i++)
            {
                sum+=Math.pow(2,i)*b;
                if(i==n-1)
                {
                    System.out.println(sum);
                }else
                {
                    System.out.print(sum+" ");
                }
            }
        }
    }
}



