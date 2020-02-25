// Read 2 strings and print the bigger string first and smaller later,

import java.util.Scanner;
import java.lang.StringBuffer;

class PrintOrderStringBuffer {
    public static void main(String args[]) {
        Scanner sc = new Scanner(System.in);

        System.out.println("Enter first string: ");
        StringBuffer str1 = new StringBuffer(sc.nextLine());

        System.out.println("Enter second string: ");
        StringBuffer str2 = new StringBuffer(sc.nextLine());

        if(str1.length() > str2.length()) //First string is bigger
            System.out.println("\n" + str1 + "\n" + str2);
        else if((str1.length() < str2.length()) ) //Second string is bigger
            System.out.println("\n" + str2 + "\n" + str1);
        else if(str1.length() == str2.length()) { //Both strings are equal in length
            if(str1.compareTo(str2) >= 0)
                System.out.println("\n" + str1 + "\n" + str2);
            else
                System.out.println("\n" + str2 + "\n" + str1);
        }

        sc.close();
    }
}