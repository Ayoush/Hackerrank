import java.io.*;
import java.util.*;

public class JavaStringReverse {
    
    public static boolean isPalindrome(String word)
    {
        boolean isPalindrome = true;
        
        for(int i = 0;i<(int)word.length()/2;i++)
        {
            if(word.charAt(i) != word.charAt(word.length()-1-i)){
                isPalindrome = false;
                break;
                
            }
        }
            
        return isPalindrome;
    }
    public static void main(String[] args) {
        
        Scanner sc=new Scanner(System.in);
        String A=sc.next();  
        System.out.println(isPalindrome(A)?"Yes":"No");
        
    }
}