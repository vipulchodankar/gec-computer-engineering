/* Write a Java program that checks whether a given string is
a palindrome or not. E.g: RACECAR is a palindrome? */

import java.util.Scanner;

class Palindrome {
    public static void main (String args[]) {
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter a string to check for palindrome: ");
        String str = sc.next().trim().toLowerCase();

        int i = 0, j = str.length() - 1;
        boolean check = false;

        while(i < j){
            if(str.charAt(i) == str.charAt(j)) {
                check = true;
            } else {
                check = false;
                break;
            }
            i++; j--;
        }

        if(check)
            System.out.println(str + " is a palindrome.");
        else
            System.out.println(str + " is not a palindrome.");
    }
}