import java.util.Scanner;
import java.io.*;

public class ForJavaTesting {

    public static void main(String[] args) throws IOException{
            Scanner sc=new Scanner(System.in);
            BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
            String x=sc.nextLine();
            String y=sc.nextLine();
            String s=sc.nextLine();

            System.out.println("String: "+s);
            System.out.println("Double: "+ Double.parseDouble(y));
            System.out.println("Int: "+x);
    }
}