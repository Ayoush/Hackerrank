import java.math.BigDecimal;
import java.util.*;
class ForJavaTesting{
    public static void main(String []argh)
    {
        Scanner sc=new Scanner(System.in);
        String s1,s2;
        s1=sc.next();
        s2=sc.next();
        System.out.println(s1.length()+s2.length());
        if(s1.compareTo(s2)<=0)
        {
            System.out.println("No");
        }else
        {
            System.out.println("Yes");
        }
        String s3,s4;
        s3=s1.toLowerCase().substring(1);
        s4=s2.toLowerCase().substring(1);
        String s5="",s6="";
        s5+=s1.charAt(0);
        s6+=s2.charAt(0);
        s1=s5.toUpperCase()+s3;
        s2=s6.toUpperCase()+s4;
        System.out.println(s1+" "+s2);
    }
}
