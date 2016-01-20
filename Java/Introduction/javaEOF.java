import java.io.*;
import java.util.*;
import java.text.*;
import java.math.*;
import java.util.regex.*;

public class Solution {
    static Scanner sc=new Scanner(System.in);
    public static void main(String[] args) {
       int count=1;
        while(sc.hasNext())
        {
            String s=sc.nextLine();
            System.out.println(count+" "+s);
            count++;
        }
    }
}