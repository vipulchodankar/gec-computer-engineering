// WAP to accept a string and check for palindrome.

import java.util.Scanner;
import java.lang.StringBuffer;

class PalindromeStringBuffer {
    public static void main(String args[]) {
        Scanner sc = new Scanner(System.in);

        System.out.println("Enter a string: ");
        StringBuffer str = new StringBuffer(sc.nextLine().toLowerCase().trim());
        StringBuffer strBackup = new StringBuffer(str) ;

        str.reverse();

        if(strBackup.compareTo(str) == 0) 
            System.out.println(str + " is a palindrome.");
        else  
            System.out.println(strBackup + " is not a palindrome.");

        sc.close();
    }
}